#include<stdio.h>
int main(){
    int i,x,y,ans=1;
    printf("enter the base:");
    scanf("%d",&x);
    printf("enter the exponent:");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        ans*=x;
    }
    printf("%d raised to the power of %d is %d",x,y,ans);
    return 0;
}