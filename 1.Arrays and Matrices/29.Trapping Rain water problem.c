#include<stdio.h>
int minimum(int a,int b){
    if(a>=b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int *arr,n,min,i,j,left_max,right_max,water=0,stores;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        //left max
        left_max=arr[i];
        for(j=i;j>=0;j--){
            if(arr[j]>=left_max){
                left_max=arr[j];
            }
        }
        //right max
        right_max=arr[i];
        for(j=i;j<n;j++){
            if(arr[j]>=right_max){
                right_max=arr[j];
            }
        }

        min=minimum(left_max,right_max);
        stores=min-arr[i];
        water=water+stores;
    }
    printf("%d water units is stored",water);
    return 0;
}





