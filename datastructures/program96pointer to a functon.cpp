#include<stdio.h>
#include<malloc.h>
typedef struct 
{
	int fees;
	char name[30];
	
} student; 
student *ptr,*p;
void display(student *);
main()
{
	
	ptr=(student *)malloc(sizeof(student));
	printf("\nenter fees\n");
	scanf("%d",&ptr->fees);
	printf("enter name\n");
	scanf("%s",&ptr->name);
	display(ptr);
}
void display(student *p)
{
	printf("fees is %d\n",p->fees);
	printf("name is %s\n",p->name);
}
