#include<stdio.h>
int main(){
    int num1,num2,max;
    printf("enter number:");
    scanf("%d", &num1);
    printf("enter number:");
    scanf("%d", &num2);
    max=(num1>num2)?num1:num2;
    while(1){
        if(max%num1==0 && max%num2==0){
            printf("the lcm is %d", max);
            break;
        }
        max++;
    }
    return 0;
}