#include<stdio.h>
void print(int a)
{
    if(a<1) return ;
    else
        printf("%d",a);
    print(a/2);
    printf("%d",a);
}
void main()
{
    print(10);
}



/*
#include<stdio.h>
void print(int a)
{
    if(a<1) return ;
    else
        return 1+print(a/2)
}
void main()
{
    int x;
    x=print(10);
    printf("%d",x);
}
*/
