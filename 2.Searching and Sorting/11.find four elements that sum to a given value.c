#include<stdio.h>
int main(){
    int *arr,n,i,j,k,l;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++){
        printf("Element %d =  ",i);
        scanf("%d",&arr[i]);
    }
    int key,flag=0;
    printf("Enter the value = ");
    scanf("%d",&key);
    for(i=0;i<n-3;i++){
        for(j=i+1;j<n-2;j++){
            for(k=j+1;k<n-1;k++){
                    int sum=0;
                for(l=k+1;l<n;l++){
                        if(key==arr[i]+arr[j]+arr[k]+arr[l]){
                             printf("%d %d %d %d are the elements\n",arr[i],arr[j],arr[k],arr[l]);
                            flag=1;
                    }
                }
            }
        }
    }
    if(flag==0){
        printf("There is no set");
    }
    return 0;
}














