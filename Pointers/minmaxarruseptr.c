// Online C compiler to run C program online
#include <stdio.h>
int minmax(int arr[],int a,int *min,int *max)
{
    *min=*max=arr[0];
    int i=1;
    for(i;i<a;i++)
    {
        if(arr[i]<*min)
        {
            *min=arr[i];
        }
        else if(arr[i]>*max)
        {
            *max=arr[i];            
        }
    }
}
int main() {
    int a[]={1,2,3,4,5,6,7,8,9,1,2};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min,&max);
    printf("min is %d ,max is %d",min,max);
   printf("%d ",len);
   printf("%d ",sizeof(a));
   printf("%d",sizeof(a[0]));
    return 0;
}