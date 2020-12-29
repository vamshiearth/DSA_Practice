#include<stdio.h>
int main(){
    int *arr,n,i;
    printf("ENter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d =",i+1);
        scanf("%d",&arr[i]);
    }

