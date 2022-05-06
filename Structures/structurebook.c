/*#pragma pack(1) se CPU cycles badh jati h..advantage y h ki memory kam leta h frr
or agr nahi use karenge toh CPU cycles reduce ho jaenge pr memory jyada lega program*/
#include<stdio.h>
#pragma pack(1)
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    }b1;
    struct book b2={'a',45.3,67};
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(struct book));
    printf("Enter the Name, Price, Number of Pages of the first book:\n");
    scanf("%c%f%d",&b1.name,&b1.price,&b1.pages);
    //printf("Enter the Name, Price, Number of Pages of the second book:\n");
    //scanf("%c%f%d",&b2.name,&b2.price,&b2.pages);
    printf("What you have entered is here:\n");
    printf("%c %f %d\n",b1.name,b1.price,b1.pages);
    printf("%c %f %d\n",b2.name,b2.price,b2.pages);
    return 0;
}