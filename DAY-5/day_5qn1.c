#include<stdio.h>
int main(){
    int i,n,num,rem,sum=0;
    printf("enter the last number:");
    scanf("%d",&num);
    printf("\n perfect number series:");
    printf("between 1 to %d\n",num);
    for(n=1;n<=num;n++)
    {
        sum=0;
        for(i=1;i<n;i++)
        {
            rem=n%i;
            if(rem==0)
            sum=sum+i;
        }
        if(sum==n)
        printf("%d ",n);
    }
    return 0;
}