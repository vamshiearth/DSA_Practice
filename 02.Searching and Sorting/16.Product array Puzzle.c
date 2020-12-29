// ORDER OF n square
//#include<stdio.h>
//int main(){
//    int *arr,n,i,res[1000],product,j;
//    printf("Enter the size of the elements : ");
//    scanf("%d",&n);
//    arr=(int*)calloc(n,sizeof(int));
//    for(i=0;i<n;i++){
//        printf("Element %d = ",i);
//        scanf("%d",&arr[i]);
//    }
//    for(i=0;i<n;i++){
//            product=1;
//        for(j=0;j<n;j++){
//            if(arr[i]!=arr[j]){
//                product=product*arr[j];
//            }
//        }res[i]=product;
//    }
//
//    for(i=0;i<n;i++){
//        printf("Element %d = %d\n",i,res[i]);
//    }
//    return 0;
//}
//  ORDER OF n
#include<stdio.h>
int main(){
    int *arr,n,i,*left,*right,*res,product;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arr=(int)calloc(n,sizeof(int));
    left=(int)calloc(n,sizeof(int));
    right=(int)calloc(n,sizeof(int));
    res=(int)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    left[0]=1;
    product=1;
    for(i=1;i<n;i++){
        product=arr[i-1]*product;
        left[i]=product;
    }
    right[n-1]=1;
    product=1;
    for(i=n-2;i>=0;i--){
        product=arr[i+1]*product;
        right[i]=product;
    }
    for(i=0;i<n;i++){
        res[i]=left[i]*right[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",res[i]);
    }
    return 0;
}


























}



















