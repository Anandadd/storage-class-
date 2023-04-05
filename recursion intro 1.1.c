/*#include<stdio.h>
void fun2(int);
void fun1(int);
void main()
{
   printf("%d",fun1());
}
int fun1(int n)
{
    if(n<=1) return 1;
    else
        return n*fun2(n-1);
}
int fun2(int n)
{
    if(n<=1) return 1;
    else
        return n*fun1(n-1);
}
*/

#include<stdio.h>
void print(int a)
{
    if(a<1)  return;
    else
        printf("%d",a);
    print(a/2);
}
void main()
{
    print(10);
}

