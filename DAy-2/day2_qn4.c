#include<stdio.h>
int main(){
    int n,r,num,sum=0;
    printf("enter a number:");
    scanf("%d", &num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==num)
    {
        printf("\n%d is palindrome",num);
    }
    else
    {
        printf("\n%d is not palindrome",num);
    }
    return 0;
}