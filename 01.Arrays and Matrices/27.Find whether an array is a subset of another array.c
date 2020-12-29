#include<stdio.h>
int main(){
    int *arr,*sub,n,index,value,key,i,m;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        arr[i]=-1;
    }
    for(i=0;i<n;i++){
        printf("Element %d : ",i+1);
        scanf("%d",&value);
        key=value%n;
        index=key;
        while(arr[index]!=-1){
            index=(index+1)%n;
            if(index==key){
                printf("Hash table full : ");
            }
        }
        arr[index]=value;
    }
    printf("Enter the number of elements of sub array : ");
    scanf("%d",&m);
    sub=calloc(m,sizeof(int));
    for(i=0;i<m;i++){
        printf("Element %d : ",i+1);
        scanf("%d",&sub[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        value=sub[i];
        key=value%n;
        if(arr[key]==value){
            count++;
        }
    }
    if(count == m){
            printf("It is a sub array ");
    }
    return 0;
}
