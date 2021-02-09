#include<stdio.h>
#include<malloc.h>
struct student
{
	int rno;
	char id[50];
};

void dis(struct student *p[10],int n);
main()
{ int i=0,opt=1,n=0;struct student *p[10];
	do
	{ p[i]=(struct student *)malloc(sizeof(struct student));
		printf("enter rno\n");
		scanf("%d",&p[i]->rno);
		printf("enter id\n");
	scanf("%s",&p[i]->id); i++;n++;
		
		printf("enter opt\n");
		scanf("%d",&opt);
	}while(opt!=0);
	dis(p,n);
}
void dis(struct student *p[10],int n)
{ for(int i=0;i<n;i++)
{

	printf("rollno = %d \n",p[i]->rno);
	printf("id is %s\n",p[i]->id);
}}
