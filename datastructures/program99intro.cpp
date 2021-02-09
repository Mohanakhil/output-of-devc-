#include<stdio.h>
main()
{
	struct student 
	{
		int rno;
		char name[30];
	 };
	 struct student s1;
	 printf("enter rollno\n");
	 scanf("%d",&s1.rno);
	 printf("enter name of student\n");
	 scanf("%s",&s1.name);
	 printf("student details are %d  %s",s1.rno,s1.name);
}
