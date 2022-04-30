#include<stdio.h>
int fact(int);
int main()
{
    int n;
    float i=1,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(i<=n)
    {
      sum=sum+i/fact(i);
      i++;
    }
    printf("Answer is %f",sum);  
}
int fact(int x)
{
    int b=1;
  for(int j=1;j<=x;j++)
  {
    b=b*j;
  }
  return b;
}