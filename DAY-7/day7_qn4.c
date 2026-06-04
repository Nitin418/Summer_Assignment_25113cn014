#include<stdio.h>
int reverse(int x,int y)
{
    if(x==0)
    return y;
    else
    return reverse(x/10,y*10+x%10);
}
int main(){
    int num,rev;
    printf("enter the number:");
    scanf("%d",&num);
    rev=reverse(num,0);
    printf("the reverse of %d is %d",num,rev);
    return 0;
}       
