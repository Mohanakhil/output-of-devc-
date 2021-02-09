#include<stdio.h>
#include<conio.h>
#include<malloc.h>
main()
{ int opt=0,i=0,j;
	typedef struct 
	{
		int rno;
		char name[100];
		char course[100];
		int fees;
	} student;
	student *pstud[10];
	do{ pstud[i] = (student *)malloc(sizeof(student));
	printf("enter student no%d rno\n",i+1);
	scanf("%d",&pstud[i]->rno);
	printf("enter name of student%d\n",i+1);
	scanf("%s",&pstud[i]->name);
	printf("enter coursename\n");
	scanf("%s",&pstud[i]->course);
	printf("enter any no except 0 for continuation\n");
	scanf("%d",&opt);i=i+1;
	}while(opt!=0);
	for(j=0;j<i;j++)
{
	printf("\nrollno=%d",pstud[j]->rno);
	printf("\nname is %s",pstud[j]->name);
	printf("\ncourse name is %s",pstud[j]->course);
}
}
