#include<stdio.h>
int fact();
int main()
{
    int a,n,r,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+fact(r);
        n=n/10;
    }
    if(sum==a)
    {
        printf("The number is perfect number..");
    }
    else
        printf("The number is not perfect number..");
}
int fact (int x)
{
    int j,b=1;
    for(j=1;j<=x;j++)
    {
        b=b*j;
    }
    return b;
}