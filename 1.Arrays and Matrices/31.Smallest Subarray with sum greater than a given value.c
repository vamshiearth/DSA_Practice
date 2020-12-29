#include<stdio.h>
int main(){
    int *arr,n,start,end,value,length,a,b,i,sum;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    length=n;
    printf("Enter the value : ");
    scanf("%d",&value);
    for(start=0;start<n;start++){
        sum=arr[start];
        if(sum>=value){
            printf("At %d we get length of 1",start);
            break;
        }
        for(end=start+1;end<n;end++){
            sum=sum+arr[end];
            if(sum>=value && length>(end - start)+1){
                length=(end-start)+1;
                a=start;
                b=end;
                break;
            }
        }
    }
    printf("From %d to %d we get the smallest sub array of length %d",a+1,b+1,length);
    return 0;
}
