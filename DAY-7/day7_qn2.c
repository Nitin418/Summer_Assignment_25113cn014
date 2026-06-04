#include<stdio.h>

void fibonacci(int num, int a, int b)
{
    if (num == 0)
    {
        return;
    }

    printf("%d ", a);
    fibonacci(num - 1, b, a + b);
}
int main(){
    int num_term=0;
    printf("enter the number of terms:");
    scanf("%d",&num_term);
    printf("fibonacci series:");
    fibonacci(num_term,0,1);
    return 0;
}