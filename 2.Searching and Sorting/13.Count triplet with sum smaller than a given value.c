#include<stdio.h>
int main(){
    int *arr,sum,n,i,j,k,key;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter a value for the triplets : ");
    scanf("%d",&key);

    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            sum=0;
            for(k=j+1;k<n;k++){
                sum=arr[i]+arr[j]+arr[k];
                if(sum<key){
                printf("%d %d %d are the triplets \n",arr[i],arr[j],arr[k]);
            }
            }
        }
    }
    return 0;
}
