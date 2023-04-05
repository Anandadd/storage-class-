/*#include<stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
void main()
{
    union abc u;
    union abc *ptr=&u;
    u.a=1;
    u.b=97;
    u.c=96.87;
    printf("a value is %d\n",ptr->a);
    printf("b value is %c\n",ptr->b);
    printf("c value is %f",ptr->c);
}
*/

#include<stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
void main()
{
    union abc u;
    union abc *ptr=&u;
    u.a=167;
    u.b=98;
    printf("a value is %d\n",ptr->a);
    printf("b value is %c\n",ptr->b);
}
