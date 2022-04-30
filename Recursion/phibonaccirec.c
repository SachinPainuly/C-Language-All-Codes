#include<stdio.h>
void phibonacci(int,int,int);
int main()
{
    int a=0,b=1,n;
    printf("Enter the number till you want to print phibonacci:\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    phibonacci(a,b,n);
}
void phibonacci(int x,int y,int z)
{
    int sum=0;
    if(x!=y)
    {
        for(int i=0;i<z-2;i++)
        {
           sum=x+y;
           x=y;
           y=sum;
           printf("%d ",sum);
        }
    void phibonacci(y,sum);
    }
}

/*#include<stdio.h>
int phibonacci(int);
int main()
{
    int n,c;
    printf("Enter the number till you want to print phibonacci:\n");
    scanf("%d",&n);
    c=phibonacci(n);
    printf("%d ",c);
}
int phibonacci(int x)
{
    int b;
    if(x==2 || x==1)
    {
        return x;
    }
    else
    b=phibonacci(x-1)+phibonacci(x-2);
    return b;
}*/