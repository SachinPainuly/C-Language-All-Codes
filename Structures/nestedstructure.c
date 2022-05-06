#include <stdio.h>
int main()
{
    struct info
    {
        int pin;
        char city[25];
        char number[13];
    };
    struct me 
    {
        char name[25];
        struct info a;
    };
    struct me p = {"Sachin", 1234, "Dehradun", "8439310420"};
    printf("%s\n", p.name);
    printf("%s\n", p.a.city);
    printf("%s\n", p.a.number);
    printf("%d\n", p.a.pin);
    return 0;
}