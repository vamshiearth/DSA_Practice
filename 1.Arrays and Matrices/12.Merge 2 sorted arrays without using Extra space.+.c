#include<stdio.h>
int main(){
    int *arr1,*arr2,*res,m,n,i,j,k;
    printf("Enter the number of elements of 1st array : ");
    scanf("%d",&m);
    arr1=calloc(m,sizeof(int));
    for(i=0;i<m;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements of 2nd array : ");
    scanf("%d",&n);
    arr2=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr2[i]);
    }
    res=calloc(m+n,sizeof(int));
    i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
        }
        else{
            res[k]=arr2[j];
            j++;
        }
        k++;
    }
    if(i>=m){
        while(j<n){
            res[k]=arr2[j];
            k++,j++;
        }
    }
    if(j>=n){
        while(i<m){
            res[k]=arr1[i];
            k++,i++;
        }
    }
    for(i=0;i<m+n;i++){
        printf("%d ",res[i]);
    }
    return 0;
}
