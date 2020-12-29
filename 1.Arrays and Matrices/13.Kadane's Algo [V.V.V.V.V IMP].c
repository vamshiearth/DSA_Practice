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
    int sum=0,max=arr[0];
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum>max){
            max=sum;
        }
    }
    printf("%d ",sum);
    return 0;
}

