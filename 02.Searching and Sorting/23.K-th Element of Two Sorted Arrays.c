#include<stdio.h>
int mergesort(int *arr1,int *arr2,int m,int n){
    int i=0;
    int j=0;
    int k=0;
    int *arr=calloc((m+n),sizeof(int));
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++,k++;
        }
        else{
            arr[k]=arr2[j];
            j++,k++;
            }
    }
    while(j<n){
        arr[k]=arr2[j];
        j++;
    }
    while(i<m){
        arr[k]=arr1[i];
        i++;
    }
    for(i=0;i<(m+n);i++){
            printf("%d ",arr[i]);
    }
    int position;
    printf("\nEnter the element : ");
    scanf("%d",&position);
    printf("\n%d is the element ",arr[position-1]);
}
int main(){
    int *arr1,*arr2,n,i,m;
    printf("Enter the number of elements in first array : ");
    scanf("%d",&m);
    printf("\nEnter the number of elements in second array : ");
    scanf("%d",&n);
    arr1=calloc(n,sizeof(int));
    arr2=calloc(n,sizeof(int));
    printf("\n 1st Array\n");
    for(i=0;i<m;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\n 2nd Array\n");
    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr2[i]);
    }
    int *arr=mergesort(arr1,arr2,m,n);
    return 0;
}
