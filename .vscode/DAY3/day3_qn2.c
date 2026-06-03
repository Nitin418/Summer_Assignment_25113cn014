#include<stdio.h>
int main(){
    int i,j,prime,n;
    printf("enter size of n:");
    scanf("%d", &n);
    printf("\nprime numbers:");
    for(i=1;i<=n;i++){
        prime=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
            {
                if(i%j==0)
                {
                    prime++;
                }
            }
    }
    if(prime==2){
        printf("%d ", i);
    }
}
}