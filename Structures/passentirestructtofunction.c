#include<stdio.h>
struct book
    {
        char name[25];
        char writer[5];
        int pgno;
    };
void display(struct book);
int main()
{
    struct book b1={"Let Us C","YPK",300};
    display(b1);
    return 0;
}
void display(struct book a)
{
    printf("%s by %s consist of %d pages.",a.name,a.writer,a.pgno);
}