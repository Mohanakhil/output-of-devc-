#include<stdio.h>
typedef struct
{
int rno;
char name[20];
} student;
student s1,*p;

main()
{ p=&s1;

printf("enter name and rno\n");
scanf("%s %d",&p->name,&p->rno);
printf("rollno =%d , name = %s",p->rno,p->name);
}
