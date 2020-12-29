#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int *arr,n,i;
    printf("Enter the number of intervals : ");
    scanf("%d",&n);
    arr=calloc(n+n,sizeof(int));
    for(i=0;i<n+n;i++){
        if(i%2==0){
            printf("Interval - %d ",i/2+1);
            printf("\nStart = ");
            scanf("%d",&arr[i]);
        }
        else{
            printf("End = ");
            scanf("%d",&arr[i]);
        }
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            if(arr[i]>arr[i+2]){
                swap(&arr[i],&arr[i+2]);
                swap(&arr[i+1],&arr[i+3]);
            }
        }
    }
    for(i=0;i<n+n;i++){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
    }
}
