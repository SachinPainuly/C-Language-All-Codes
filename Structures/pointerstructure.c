#include<stdio.h>
int main()
{
    struct book
    {
        char name[25];
        char author[5];
        int pgno;
    };
    struct book b1={"Let Us C","YPK",300};
    struct book *p;
    p=&b1;
    printf("%s book by %s consist of %d pages.\n",b1.name,b1.author,b1.pgno);
    printf("%s book by %s consist of %d pages.\n",p->name,p->author,p->pgno);
}