#include<stdio.h>
#include<malloc.h>
typedef struct
{
	int rno;
	char name[30];
} student;
student *p;
void display(student *);
main()
{
	p=(student *)malloc(sizeof(student));
	printf("enter rno and name\n");
	scanf("%d %s",&p->rno,&p->name);
	display(p);
}
void display(student *ptr)
{
	printf("rno and name are %d %s\n",ptr->rno,ptr->name);
}
