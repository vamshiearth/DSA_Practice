#include<stdio.h>
int main(){
    int res[500]={0},n,j,x,digit,carry,product,length;
    printf("Enter a number to find the factorial : ");
    scanf("%d",&n);
    res[0]=1,length=1;
    for(x=2;x<=n;x++){
            carry=0;
        for(j=0;j<length;j++){
            product= (res[j]*x) + carry;
            digit=product%10;
            res[j]=digit;
            carry=product/10;
        }
        while(carry!=0){
            digit=carry%10;
            res[length]=digit;
            length++;
            carry=carry/10;
        }
    }
    for(int i=length-1;i>=0;i--){
        printf("%d",res[i]);
    }
    return 0;
}
