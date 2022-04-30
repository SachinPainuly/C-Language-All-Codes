#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
    int r,a,n,c=0,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
     while(a>0)
    {
        r=a%10;
        sum=sum+power(r,c);
        a=a/10;
    }
    if(a==sum)
    {
        printf("Armstrong...");
    }
    else
    printf("Not Armstrong...");
}
int power(int x,int y)
{
    int z;
    z=pow(x,y);
    return z;
}