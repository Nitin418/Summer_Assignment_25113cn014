#include<stdio.h>
int main()
{
    float arr[100],n,sum=0;
    float avg;
    int i;
    printf("enter size of array:");
    scanf("f",&n);
    printf("enter %f elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum / n;
    printf("sum=%f\n",sum);
    printf("average=%.2f\n",avg);
    return 0;
}