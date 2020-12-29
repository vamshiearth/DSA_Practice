#include<stdio.h>
int main(){
    int *arr,n,i;
    printf("Enter the number of stocks : ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Stock at day %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    int buy=arr[0],stock,day;
    for(i=0;i<n;i++){
        stock=arr[i];
        if(stock<buy){
            buy=stock;
            day=i;
        }
    }
    printf("Buy for %d at day %d ",buy,day+1);
    int prev_profit=arr[day+1]-buy,sell;
    for(i=day+2;i<n;i++){
        int profit=arr[i]-buy;
        if(profit>prev_profit){
            prev_profit=profit;
            sell=i;
        }
    }
    printf("\nMax profit will be %d when we sell on day %d ",prev_profit,sell+1);
    return 0;
}




