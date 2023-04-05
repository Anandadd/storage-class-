/*#include<stdio.h>
void fun();
int main()
{
    int a=1;
    fun1();
    {
        int a=10;
        printf("inside block1 %d\n",a);
    }
    {
        printf("inside block2 %d\n",a);
    }
    printf("inside main %d\n",a);
    return 0;
}
void fun1()
{
    int a=23;
    printf("inside fun %d",a);
}
*/

#include<stdio.h>
void fun();
int a=50;
int main()
{
    fun1();
    {
        int a=10;
        printf("inside block1 %d\n",a);
    }
    {
        printf("inside block2 %d\n",a);
    }
    a++;
    printf("inside main %d\n",a);
    return 0;
}
void fun1()
{
    int a=23;
    printf("inside fun %d",a);
}
