#include<stdio.h>
void display(int n)
{
    if(n<1)
        return;
    else
    {
        printf("%d",n);
        display(n-1);
        printf("%d",n);
    }
}
void main()
{
    int n=3;
    display(n);
}
/*
#include<stdio.h>
int sum(int x)
{
    int s=0;
    if(x==1)
        return x;
    s=x+sum(x-1);
    return s;
}
void main()
{
    int a;
    a=sum(5);
    printf("%d",a);
}
*/
