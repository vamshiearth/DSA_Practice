#include<stdio.h>
int main(){
    int arr[10],n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d is the minimum  %d is the maximum ",min,max);
    return 0;
}
