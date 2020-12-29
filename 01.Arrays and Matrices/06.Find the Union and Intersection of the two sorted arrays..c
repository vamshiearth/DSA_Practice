#include<stdio.h>
int main(){
    int *arr1,*arr2,n,m,i,j,u[100],x[100];
    printf("Enter the number of elements of 1st array : ");
    scanf("%d",&m);
    arr1=calloc(m,sizeof(int));
    for(i=0;i<m;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the number of elements of 2nd array : ");
    scanf("%d",&n);
    arr2=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr2[i]);
    }
    int k=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                u[k]=arr1[i];
                arr2[j]=-1;
                k++;
            }
        }
    }
    printf("Intersection elements\n");
    for(i=0;i<k;i++){
        if(u[i]!=-1){
            printf("%d ",u[i]);
        }
    }
    printf("\nUnion elements\n");

    for(i=0;i<m;i++){
        printf("%d ",arr1[i]);
    }
    for(i=0;i<n;i++){
        if(arr2[i]!=-1){
            printf("%d ",arr2[i]);
        }
    }
    return 0;
}

