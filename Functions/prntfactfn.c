#include<stdio.h>
void fact();
int main()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);
  fact(n);
}
void fact(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d ",i);
        }
    }
}