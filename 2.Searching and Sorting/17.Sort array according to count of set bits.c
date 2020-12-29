#include<stdio.h>
int bit(int a){
    int count=0;
    while(a>0){
        if(a&1==1)
            count++;
            a=a>>1;
    }
    return count;
}
int main(){
    int *arr,*count,n,i,temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    count=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        count[i]=bit(arr[i]);
    }
//    for(i=0;i<n;i++){
//        printf("%d ",count[i]);
//    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(count[j]<count[j+1]){

                temp=count[j];
                count[j]=count[j+1];
                count[j+1]=temp;

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
//    printf("\n\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}



