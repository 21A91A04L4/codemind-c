#include<stdio.h>
int main()
{
    int i,n,sum=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
        if(sum>9&&n==0)
        {
            n=sum;
            sum=0;
        }
    }
    printf("%d",sum);
}