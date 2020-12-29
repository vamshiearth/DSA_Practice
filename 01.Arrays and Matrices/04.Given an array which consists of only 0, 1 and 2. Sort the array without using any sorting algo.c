#include<stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int *arr,n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    int low=0,high=n-1,temp;
    i=0;
    while(i<=high && low<high){
            if(arr[i]==0){
                swap(&arr[i],&arr[low]);
                low++,i++;
            }
            else if(arr[i]==1){
                i++;
            }
            else if(arr[i]==2){
                swap(&arr[i],&arr[high]);
                high--;
            }
            else{
                printf("NO DATA");
            }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
