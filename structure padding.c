/*#include<stdio.h>
struct abc
{
    char c;
    int b;
    char a;
}s;
void main()
{
    printf("%d", sizeof(s));
}*/

/*#include<stdio.h>
struct abc
{
    char c;
    char a;
    int b;
}s;
void main()
{
    printf("%d", sizeof(s));
}
*/

#include<stdio.h>
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
