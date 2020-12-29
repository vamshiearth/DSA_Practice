#include<stdio.h>
int main(){
    int *arr,n,i,j,count,*c;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    c=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
                count++;
            }
            c[i]=count;
        }
    }
    c[n-1]=1;
//    for(i=0;i<n;i++){
//        if(arr[i]!=-1){
//            printf("%d is repeated %d times \n",arr[i],c[i]);
//        }
//    }
    for(i=0;i<n;i++){
        if(c[i]>1 && arr[i]!=-1){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
