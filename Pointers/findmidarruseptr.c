#include<stdio.h>
int *findmid(int a[],int n)
{
    return &a[n/2];
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int *mid= findmid(arr,len);
    printf("%d",*mid);
}