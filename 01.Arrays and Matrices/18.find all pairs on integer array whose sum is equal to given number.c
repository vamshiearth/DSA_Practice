#include<stdio.h>
int main(){
    int *arr,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    int i,j,sum=0,key,count=0;
    printf("Enter the key to find the key  : ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum=0;
            sum=arr[i]+arr[j];
            if(sum==key){
                count++;
                printf("{%d,%d} ",arr[i],arr[j]);
            }
        }
    }
    printf("\n No. of pairs = %d ",count);
    return 0;
}
