#include<stdio.h>
struct book
    {
        char name[25];
        char author[5];
        int pgno;
    };
void display(struct book *);
int main()
{
    struct book b1={"Let Us C","YPK",300};
    display(&b1);
}
void display(struct book *p)
{
    printf("%s book by %s consisting %d number of pages.",p->name,p->author,p->pgno);
}
