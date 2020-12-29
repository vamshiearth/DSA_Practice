#include<stdio.h>
int main(){
    int *arr,n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    int r;
    printf("Enter number of rotations = ");
    scanf("%d",&r);
    for(i=1;i<=(n-r);i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }arr[n-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
        return 0;
}
