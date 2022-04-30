#include<stdio.h>
int main()
{
    int a[10],i;
    float avg,sum=0;
    printf("Enter the marks:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum is: %f\n",sum);
    avg=sum/10;
    printf("Average is %f",avg);
    return 0;
}
