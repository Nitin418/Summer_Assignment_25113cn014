#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("");
        }
        for(int j=1;j<=1;j++)
        {
            printf("%c",j+64);
        }
        for(int k=i-1;k>=1;k--)
        {
            printf("%c",k+64);
        }
        printf("\n");
    }
    return 0;
}