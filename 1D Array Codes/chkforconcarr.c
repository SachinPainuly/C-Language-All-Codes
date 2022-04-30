#include<stdio.h>
int main()
{
    int i,n,m,x=0,y=0,z=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of the array are:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Select an element from the array:\n");
    scanf("%d",&m);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>m)
        {
           x++;
        }
        if(a[i]<m)
        {
            y++;
        }
        if(a[i]==m)
        {
            z++;
        }
    }
    printf("Elements greater than %d is %d\n",m,x);
    printf("Elements less than %d is %d\n",m,y);
    printf("Elements equal to %d is %d\n",m,z);
}