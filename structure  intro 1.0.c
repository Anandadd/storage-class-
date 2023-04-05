/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    struct student s1={1,"jenny",90.91};
    struct student s2={2,"akash",65.91};
    printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
}
*/
/*
#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
} s1={1,"jenny",90.91};
void main()
{
   printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);

}
*/

/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    struct student s1;
    struct student s2={2,"akash",65.91};
    s1=s2;
    printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
}
*/
/*#include<stdio.h>
struct student{
int rollno;
char name[10];
float marks;
};
void main()
{
    struct student s1;
    struct student s2={2,"akash",65.91};
    s1.rollno=1;
    s1.name[10]="jenny";
    s1.marks=90.91;
    printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
}
*/
/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    struct student s1;
    struct student s2={2,"akash",65.91};
    printf("info of s1");
    scanf("%d",&s1.rollno);
    scanf("%s",&s1.name);
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
}
*/
/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    struct student s1={1,"jenny",90.91};
    struct student s2={2,"akash",65.91};
    if(s1.rollno<s2.rollno)
        printf("hye");
}
*/


#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
}s3={3};
struct student s1={1,"jenny",90.91};
struct student s2;
void main()
{
    s2=s1;
    printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
    printf("\n info of s3");
    printf("\n %d  %s  %f",s3.rollno,s3.name,s3.marks);
}



