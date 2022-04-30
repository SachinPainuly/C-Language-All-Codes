#include<stdio.h>
int fact();
int main()
{
    int n,r,a;
    printf("Enter n and r:\n");
    scanf("%d%d",&n,&r);
    a=fact(n)/(fact(n-r)*fact(r));
    printf("Answer is %d",a);
    return 0;
}
int fact(int x)
{
    int i,b=1;
    for(i=1;i<=x;i++)
    {
        b=b*i;
    }
        return b;
}