#include<stdio.h>
void swap(int *a,int *b){
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
    int low=0,high=n-1;
    i=0;
    while(low<=high){
        if(arr[i]<0){
            swap(&arr[i],&arr[high]);
            high--;
        }
        else{
            low++,i++;
        }
    }int res[100];
    low=0,high=n-1;
    for(i=0;i<n;i++){
        if(i%2==0){
            res[i]=arr[high];
            high--;
        }
        else{
            res[i]=arr[low];
            low++;
        }
    }
    for(i=0;i<n;i++){
            printf("%d ",res[i]);
    }
    return 0;
}
