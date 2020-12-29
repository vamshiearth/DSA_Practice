#include<stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int *arr,n,i,low,high,flag=0,b[1000],c[1000],miss[1000];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                  flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    int f=arr[0];
//    for(i=0;i<n;i++){
//        printf("Element %d = %d\n",i,arr[i]);
//    }

    for(i=0;i<n;i++){
        int  count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
                count++;
            }
        }
        c[i]=count;
    }
    for(i=0;i<n;i++){
        if(arr[i]!=-1 && c[i]>1){
            printf("%d is repeating %d times \n",arr[i],c[i]);
        }
    }
    for(i=0;i<n;i++){
            f++;
            if(f==arr[i]){
                printf("%d is missing\n",f);
            }
    }
    return 0;
}




















