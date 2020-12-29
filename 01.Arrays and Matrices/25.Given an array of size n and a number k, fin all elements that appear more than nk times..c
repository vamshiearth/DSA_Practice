#include<stdio.h>
int main(){
    int *arr,n,i,j,c[100];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
            int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
                count++;
            }
        }
        c[i]=count;
    }
    for(i=0;i<n;i++){
        if(arr[i]!=-1 && c[i]>(n/arr[i])){
            printf("%d is repeated %d times which is more than %d/%d=%d times\n",arr[i],c[i],n,arr[i],n/arr[i]);
        }
    }
    return 0;
}
