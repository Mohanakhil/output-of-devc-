#include<stdio.h>
#include<malloc.h>
typedef struct 
{
	int rno;
	char  name[30];
} student;
student *p[20];
void display(int,student *);
main()
{ int i,n=0;
printf("enter no of students\n");
scanf("%d",&n);
p[i]=(student *)malloc(sizeof(student));
for(i=0;i<n;i++)
{
	printf("enter rno and name of %d student\n",i+1);
	scanf("%d %s",&p[i]->rno,&p[i]->name);
}
display(n,*p);	
}
void display(int m,student *p[20])
{ int j;
for(j=0;j<m;j++)
{
	printf("details of %d student are rno= %d and name=%s \n",j+1,*p[j]->rno,*p[j]->name);
}}
