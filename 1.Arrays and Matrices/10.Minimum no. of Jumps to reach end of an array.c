#include<stdio.h>
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
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
    int *jump;
    jump=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        jump[i]=1000;
    }
    jump[0]=0;
    for(i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(j+arr[j]>=i){
                jump[i]=min(jump[i],jump[j]+1);
            }
        }
    }
    printf("%d",jump[n-1]);
    return 0;
}

