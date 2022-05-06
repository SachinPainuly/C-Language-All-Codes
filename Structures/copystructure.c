#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[10];
        int age;
        float salary;
    };
    struct person m1={"Sachin",19,100000.0};
    struct person m2,m3;
    strcpy(m2.name,m1.name);
    m2.age=m1.age;
    m2.salary=m1.salary;
    m3=m2;
    printf("%s %d %.2f\n",m1.name,m1.age,m1.salary);
    printf("%s %d %.2f\n",m2.name,m2.age,m2.salary);
    printf("%s %d %.2f\n",m3.name,m3.age,m3.salary);
    return 0;
}