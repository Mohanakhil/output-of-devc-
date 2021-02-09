#include<stdio.h>
main()
{
	typedef struct
	{
		int rno;
		char name[100];
		char course[200];
		char father[100];
	 } student;
	 student std1,*p;
	 p=&std1;
	 printf("enter rollno\n");
	 scanf("%d",&p->rno);
	 printf("enter name \n");
	 scanf("%s",&p->name);
	 printf("\nenter course name\n");
	 scanf("%s",&p->course);
	 printf("enter fathers name\n"); 
	 scanf("%s",&std1.father);
	 printf("*************stud details****************\n");
	 printf("roll no is %d\n",p->rno) ;
	 printf("name is %s\n",p->name);
	 printf("course is %s\n",p->course);
	 printf("fathers name is ");puts(p->father);
}
