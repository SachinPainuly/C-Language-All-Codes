#include<stdio.h>
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    //printf("%d",arr[][2]);
    for(int i=0;i<3;i++)
    {
        printf("Adress of %d-th 1 D Array is %u.\n",i,arr[i]);
    }

}