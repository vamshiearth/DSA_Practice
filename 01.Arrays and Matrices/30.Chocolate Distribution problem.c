#include<stdio.h>
int main(){
    int *arr,n,sub,s,min,i,j;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d =",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of students : ");
    scanf("%d",&s);
    min=99999;
    for(i=0;i<n-s;i++){
        for(j=i+1;j<=i+4;j++){
            sub=arr[j]-arr[i];
            if(sub<min){
                min=sub;
            }
        }
    }
    printf("%d is the minimum difference ",min);
    return 0;
}
