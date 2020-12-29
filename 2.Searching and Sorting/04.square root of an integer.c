#include<stdio.h>
#include<math.h>
int main(){
    int n,arr[100],i;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        arr[i]=i*i;
    }
//    for(i=1;i<n;i++){
//        printf("Element %d = %d  \n",i,arr[i]);
//    }
    int count=0;
     for(i=1;i<n;i++){
        if(arr[i]<n){
//            printf("%d ",arr[i]);
            count++;
        }
     }
     printf("%d",count);

    return 0;
}
