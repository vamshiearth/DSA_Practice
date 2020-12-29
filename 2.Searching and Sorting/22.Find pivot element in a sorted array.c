#include<stdio.h>
int main(){
    int *arr,n,i,j,temp,r,side;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Rotate from left(enter 0),Rotate from right (enter 1) :  ");
    scanf("%d",&side);
    printf("Number of rotations : ");
    scanf("%d",&r);
    if(side==0){
        for(i=1;i<=r;i++){
            temp=arr[0];
            for(j=0;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
        }
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        for(i=1;i<=n-r;i++){
           temp=arr[0];
            for(j=0;j<n-1;j++){
            arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
        }
         for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }

    int low=0,high=n-1,mid;
    if(side==0){
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            printf("\n%d is the index",mid);
            break;
        }
        else if(arr[mid]<arr[low]){
                high=mid-1;
        }
        else if(arr[mid]>arr[low]){
            low=mid+1;

        }
        else{
            printf("Element not found");
            break;
        }
    }
    }
    else{
        while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            printf("\n%d is the index",mid);
            break;
        }
        else if(arr[mid]>arr[low]){
              low=mid+1;

        }
        else if(arr[mid]<arr[low]){
            high=mid-1;
        }
        else{
            printf("Element not found");
            break;
        }
    }

    }
    return 0;

}
