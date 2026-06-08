#include <stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    printf("enter the numberto find factorial:");
    scanf("%d",&n);
    printf("factorial of the number is =%d",fact(n));
    return 0;
}