#include<stdio.h>
int main()
{
    struct info
    {
        char symbol;
        int num;
    };
    struct info a[5];
    int i;
    printf("Enter Number and it's corresponding alphabet:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%c%d",&a[i].symbol,&a[i].num);
    }
    for(i=0;i<=4;i++)
    {
        printf("%c %d\n",a[i].symbol,a[i].num);
    }
    return 0;
}