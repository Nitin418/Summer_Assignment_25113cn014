#include<stdio.h>
int main(){
    int n, t1=0,t2=1,nextterm=t1+t2;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("fibonacci series: \n%d%d",t1,t2);
    for(int i=3;i<=n;i++){
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
        printf("%d",nextterm);
    }
    return 0;
}