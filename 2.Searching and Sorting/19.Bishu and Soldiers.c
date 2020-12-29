#include<stdio.h>
int main(){
    int *arr,n,i,j,rounds,power[1000];
    printf("Enter the number of soilders : ");
    scanf("%d",&n);

    arr=(int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++){
        printf("Power of soilder %d = ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the number of rounds :  ");
    scanf("%d",&rounds);

    for(i=0;i<rounds;i++){
            printf("Enter the power of bishu in round %d = ",i+1);
            scanf("%d",&power[i]);
    }

    for(i=0;i<rounds;i++){
        int sum=0;
        int kill=0;

        for(j=0;j<n;j++){

            if(arr[j]>=power){
                sum=sum+arr[j];
                kill++;
            }

        }printf("%d %d\n",kill,sum);

    }
return 0;
}

