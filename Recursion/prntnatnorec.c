/*#include<stdio.h>
void summ();
int main()
{ 
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);
  printf("The Sum Of First %d Natural Numbers are:",n);
  summ(n);
}
void summ(int x)
{
  int i=1;  
  if(1)
  {
    printf("%d ",i);
    summ(i++);
  }
}*/
#include <stdio.h>
int print();
int main()
{
    int n=1;
    printf("First 50 Natural Numbers Are:\n");
    print(n);
    return 0;
}
int print(int x)
{
    if(x<=50)
    {
    printf("%d ",x);
    print(x+1);
    }
}