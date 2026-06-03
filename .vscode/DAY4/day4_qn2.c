#include<stdio.h>

int nthfibonacci(int input1)
{
    if (input1 <= 1)
    {
        return 0;
    }
    else if (input1 == 2)
    {
        return 1;
    }
    else
    {
        return nthfibonacci(input1 - 1) + nthfibonacci(input1 - 2);

    }
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    printf("%d", nthfibonacci(num));
    getch();
}    
    

