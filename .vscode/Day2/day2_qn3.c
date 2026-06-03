#include<stdio.h>
 int main(){
    int n,rem,prod=1;
    printf("enter any number:");
    scanf("%d", &n);
    if(n==0){
        prod=0;
    }
    else{
        if(n<0){
            n=-n;
        }
    }
    while(n>0){
        rem=n%10;
        prod=prod*rem;
        n=n/10;
    }
    printf("product of digits is %d", prod);
    return 0;
 }