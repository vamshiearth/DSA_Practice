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
    int pivot=arr[high],pindex=0,temp;
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
    int *arr,n,i,low,high;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    low=0,high=n-1;
    arr=quicksort(arr,low,high);
    int a,b,k;
    printf("Enter the key value : ");
    scanf("%d",&k);
    if((arr[0]+k)>arr[n-1]){
        a=arr[0];
    }
    else{
        a=arr[0]+k;
    }
    if((arr[n-1]-k)<arr[0]){
        b=arr[n-1];
    }
    else{
        b=arr[n-1]-k;
    }
    printf("Max diff is %d",(b-a));
    return 0;
}
