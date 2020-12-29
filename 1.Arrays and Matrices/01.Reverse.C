#include<stdio.h>
int main(){
    int *arr,n,i,j,r,side,temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int ));
    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the  number of rotations : ");
    scanf("%d",&r);
    printf("Rotate from left(0) Rotate from right(1) : ");
    scanf("%d",&side);
    if(side==0){
        for(j=1;j<=r;j++){
                temp=arr[0];
            for(i=0;i<n;i++){
                arr[i]=arr[i+1];
            }arr[n-1]=temp;
        }
    }
    else{
        for(j=1;j<=(n-r);j++){
            temp=arr[0];
            for(i=0;i<n;i++){
                arr[i]=arr[i+1];
            } arr[n-1]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
