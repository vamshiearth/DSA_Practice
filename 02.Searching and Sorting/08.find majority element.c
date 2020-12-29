#include<stdio.h>
int main(){
    int *arr,n,i,j,temp,c[1000];
    printf("Enter the number of elements :  ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d - ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
            int flag=0;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
//    for(i=0;i<n;i++){
//        printf("Element %d = %d\n",i,arr[i]);
//    }
    for(i=0;i<n;i++){
            int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
                count++;
            }
        }c[i]=count;
    }
    int x=(n/2);
         int flag=0;

    for(i=0;i<n;i++){
        if(arr[i]!=-1 && c[i]>x){
        printf("%d is repeated %d times which is more than %d/2=%d times\n",arr[i],c[i],n,x);
        flag=1;
        }
    }

   if(flag==0){
            printf("There is no majority element ");
    }
    return 0;
}
