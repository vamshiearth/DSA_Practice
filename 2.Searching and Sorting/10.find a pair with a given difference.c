#include<stdio.h>
int main(){
    int *arr,n,i,j;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter a number to find the pair whose diff is number : ");
    scanf("%d",&key);
    int flag=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
                int value1=(arr[i]-arr[j]);
                int value2=(arr[j]-arr[i]);
//                printf("%d %d \n",value1,value2);
                if(value1==key || value2==key){
                        flag=1;
                printf("%d %d is the pair\n",arr[i],arr[j]);
            }
        }
    }
    if(flag==0){
        printf("There is no pair ");
    }
return 0;
}
