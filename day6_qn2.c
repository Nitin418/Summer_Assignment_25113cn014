#include<stdio.h>
int main(){
    int rem,num,b_num,d_num=0,base=1;
    printf("enter a binary number:");
    scanf("%d",&num);
    b_num=num;
    while(num){
        rem=num%10;
        d_num=d_num+rem*base;
        base=base*2;
        num=num/10;
    }
    printf("the decimal equivalent of the binary number %d is %d",b_num,d_num);
}