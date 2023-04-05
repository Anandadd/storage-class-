/*#include<stdio.h>
#pragma pack (1)
struct abc
{
    char c;
    int b;
    char a;
};
void main()
{
    struct abc s;
    printf("%d", sizeof(s));
}*/

#include<stdio.h>
#pragma pack (1)
struct abc
{
    char c;
    int b;
    double a;
};
void main()
{
    struct abc s;
    printf("%d", sizeof(s));
}
