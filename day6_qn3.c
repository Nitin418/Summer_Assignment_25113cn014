#include<stdio.h>
int countsetbits(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    int num;
    printf("enter an integer:");
    scanf("%d",&num);
    printf("the number of set bits in %d is %d",num,countsetbits(num));
    return 0;
}