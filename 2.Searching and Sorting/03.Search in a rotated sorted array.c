#include<stdio.h>
int main(){
    int *arr,n,i,j,side,r,temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d =  ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Rotate from left(0) Rotate from right(1) : ");
    scanf("%d",&side);
    printf("Enter no. of rotations : ");
    scanf("%d",&r);
    if(side==0){
        for(i=1;i<=r;i++){
            temp=arr[0];
            for(j=0;j<n;j++){
                    arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
        }
    }
    else{
           for(i=1;i<=(n-r);i++){
            temp=arr[0];
            for(j=0;j<n;j++){
                    arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
        }
     }
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
    int low=0,high=n-1,mid,pivot;
    if(side==0){
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                pivot=mid;
                break;
            }
            if(arr[mid]>arr[low]){
                low=mid+1;
            }
            if(arr[mid]<arr[low]){
                high=mid-1;
            }
        }
    }
    else{
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                pivot=mid;
                break;
            }
            if(arr[mid]>arr[low]){
                high=mid-1;
            }
            if(arr[mid]<arr[low]){
                  low=mid+1;
            }
        }
    }
    mid=pivot;
    low=0,high=n-1;
    int key;
    printf("\nEnter the element to find it's position : ");
    scanf("%d",&key);
    while(low<high){
        if(arr[mid]==key){
            printf("%d is the index\n%d is the position ",mid,mid+1);
            break;
        }
        if(arr[mid]>key && arr[high]>=key){
            low=mid+1;
        }
        if(arr[mid]<key && arr[low]<=key){
            high=mid-1;
        }
        mid=(low+high)/2;
    }
//    printf("\n\n%d is the pivot",pivot);
    return 0;
}

