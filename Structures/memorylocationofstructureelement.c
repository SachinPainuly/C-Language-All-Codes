/*memory concept*/
#include<stdio.h>
#pragma pack(1)
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b1={'a',45.3,67};
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(struct book));
    printf("%u\n%u\n%u",&b1.name,&b1.price,&b1.pages);
    return 0;
}