#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,13};
    int i,c=0,b=0;
    for(i=0;i<=11;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        {
            b++;
        }
    }
    printf("%d even numbers\n",c);
    printf("%d odd numbers",b);
}