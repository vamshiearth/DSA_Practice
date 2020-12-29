#include<stdio.h>
int main(){
    int *arr1,*arr2,*arr3,i,j,k,m,n,o;
    printf("Enter the number of elements in 1st array : ");
    scanf("%d",&m);
    arr1=calloc(m,sizeof(int));
    for(i=0;i<m;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements 2nd array : ");
    scanf("%d",&n);
    arr2=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("Enter the number of elements 3rd array : ");
    scanf("%d",&o);
    arr3=calloc(o,sizeof(int));
    for(i=0;i<o;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr3[i]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                for(k=0;k<o;k++){
                    if(arr2[j]==arr3[k]){
                        printf("%d ",arr3[k]);
                    }
                }
            }
        }
    }
    return 0;
}
