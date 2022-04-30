/*#include<stdio.h>
int main()
{
    int n,arr[]={1,2,3,4,5};
    int *p=&arr[0],sum=0;
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        sum=sum + *p;
        p++;
    }
    printf("Sum of the array is %d.",sum);
}*/
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},sum=0;
    int *p;
    for(p=a;p<=a+4;p++)
    {
        sum+=*p;
    }
    printf("%d",sum);
}