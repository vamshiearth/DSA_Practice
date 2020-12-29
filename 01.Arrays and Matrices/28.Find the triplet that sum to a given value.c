#include<stdio.h>
int main(){
    int *arr,n,value,left,right,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d =  ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the Value : ");
    scanf("%d",&value);
    for(i=0;i<n;i++){
        left=i+1,right=n-1;
        while(left<right){
            if(arr[i] + arr[left] + arr[right] == value){
                printf("%d %d %d are the triplets\n",arr[i],arr[left],arr[right]);
                left++,right--;
            }
            if(arr[i] + arr[left] +arr[right] > value){
                right--;
            }
            if(arr[i] + arr[left] + arr[right] < value ){
                left++;
            }
        }
    }
    return 0;
}
