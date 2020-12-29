#include<stdio.h>
int main(){
    int *arr,n;
    printf("Enter the number of trees : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Height if tree %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int m;
    printf("Enter required meters of wood : ");
    scanf("%d",&m);
    int i=0;
    while(i<n){
            int sum=0;
        for(int j=i+1;j<n;j++){
           int x=arr[j]-arr[i];
            sum=sum+x;
        }
        if(sum==m){
            printf("%d ",arr[i]);
            break;
        }
        if(sum>m){
            i++;
        }
        if(sum<m){
            int extra=m-sum;
            arr[n-1]=arr[n-1]-extra;
            printf("%d ",arr[n-1]);
            break;
        }
    }
    return 0;
}
