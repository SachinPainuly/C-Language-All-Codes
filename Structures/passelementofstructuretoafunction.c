#include<stdio.h>
void display(char *,char *,int);
int main()
{
    struct book
    {
        char name[25];
        char writer[5];
        int pgno;
    };
    struct book b1={"Let Us C","YPK",300};
    display(b1.name,b1.writer,b1.pgno);
    return 0;
}
void display(char *s,char *p,int n)
{
    printf("%s by %s consist of %d pages.",s,p,n);
}