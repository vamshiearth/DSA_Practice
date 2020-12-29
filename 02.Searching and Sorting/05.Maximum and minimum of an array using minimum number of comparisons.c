#include<stdio.h>
int main(){
    int *arr,n,i,max,min;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d - ",i);
        scanf("%d",&arr[i]);
    }

    if(arr[0]>arr[1]){
        min=arr[1];
        max=arr[0];
    }
    else{
        min=arr[0];
        max=arr[1];
    }
    for(i=2;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d is minimum %d is maximum ",min,max);
    return 0;
}



























