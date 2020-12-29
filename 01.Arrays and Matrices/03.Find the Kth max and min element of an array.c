#include<stdio.h>
int *quicksort(int *arr,int low,int high){
    if(low<high){
        int pindex=partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
    return arr;
}
int partition(int *arr,int low,int high){
    int pindex=0,pivot=arr[high],temp;
    for(int i=0;i<=high;i++){
        if(arr[i]<pivot){
            temp=arr[i];
            arr[i]=arr[pindex];
            arr[pindex]=temp;
            pindex++;
        }
    }
    temp=arr[high];
    arr[high]=arr[pindex];
    arr[pindex]=temp;
    return pindex;
}
int main(){
    int *arr,n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    int low=0,high=n-1,position;
    arr=quicksort(arr,low,high);
    printf("Enter the Kth position to find the element : :");
    scanf("%d",&position);
    printf("%d is the element at position %d ",arr[position-1],position);
    return 0;
}
