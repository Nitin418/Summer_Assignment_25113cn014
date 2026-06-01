#include<stdio.h>
int largestprimefactor(int n){
    int maxprime=-1;
    while(n%2==0)
    {
        maxprime=2;
        n /=2;
    }
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0)
        {
            maxprime=i;
            n /=i;
        }
    }
    if(n>2)
        maxprime=n;
    return maxprime;
}
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("The largest prime factor of %d is %d\n", n, largestprimefactor(n));
    return 0;
}