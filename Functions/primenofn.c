#include<stdio.h>
int prime();
int main()
{
    int n,c;
    printf("Enter a number:\n");
    scanf("%d",&n);
    c=prime(n);
    printf("%d",c);
    
}
int prime(int x)
{
    int i,b=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
          b=1;
          break;
        }
    }
     if(b==1)
    {
        return 0;  
     }
    else
        return 1;
}