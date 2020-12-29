#include<stdio.h>
int main(){
    int *arr,i,n,incl,excl,excl_new;
    printf("Enter the number of number : ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    incl=arr[0];
    excl=0;
    for(i=0;i<n;i++){
        excl_new=(incl>excl)?incl:excl;
        incl=(arr[i]+excl);
        excl=excl_new;
    }
    excl_new=(incl>excl)?incl:excl;
    printf("%d",excl_new);
    return 0;
}
