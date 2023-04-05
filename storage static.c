/*#include<stdio.h>
static char ch;
void display();
void main()
{
    display();
    display();
    printf("\nch=%c",ch);
}
void display()
{
    static int x;
    int y=10;
    x+=10;
    y--;
    printf("\nx=%d",x);
    printf("\ny=%d",y);
}
*/


/*#include<stdio.h>
void display();
void main()
{
    int i;
    for(i=0;i<3;i++)
        display();
}
void display()
{
    static int x=5;
    int y=5;
    x++;
    y++;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
*/

#include<stdio.h>
int fun()
{
    static int num =16;
    return num--;
}
int main()
{
    for(fun();fun();fun())
        printf("%d",fun());
    return 0;
}
