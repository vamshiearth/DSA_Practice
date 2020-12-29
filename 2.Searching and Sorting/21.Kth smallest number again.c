#include<stdio.h>
int *quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main(){
    int *arr,n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=
    calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d =  ",i);
        scanf("%d",&arr[i]);
    }
    int low=0,high=n-1;
    arr=quicksort(arr,low,high);
    int number,flag=0;
    printf("Enter the number to find the position : ");
    scanf("%d",&number);
    for(i=0;i<n;i++){
        if(number==arr[i]){
            printf("Position of the element : %d ",i+1);
            flag=1;
        }
    }
    if(flag==0)
        printf("-1");

return 0;
}
int partition(int arr[],int low,int high){
    int pivot=arr[high],pindex=0,temp;
    for(int i=0;i<high;i++){
        if(arr[i]<pivot){
            temp=arr[pindex];
            arr[pindex]=arr[i];
            arr[i]=temp;
            pindex++;
        }
    }
    temp=arr[high];
    arr[high]=arr[pindex];
    arr[pindex]=temp;
    return pindex;
}
int *quicksort(int arr[],int low,int high){
    if(low<high){
        int pindex=partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
    return arr;
}
