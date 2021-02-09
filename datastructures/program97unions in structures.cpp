#include<stdio.h>
typedef struct 
{
	int marks;
	union{
		int rno;
		char name[30];
	};
	
} student;
student std1;
main()
{
	char choice;
	printf("enter y for name and  n for rno");
	scanf("%s",&choice);
	if(choice=='y')
	{printf("enter name\n"); scanf("%s",&std1.name);
	}
	else {
		printf("enter rno\n");
		scanf("%d",&std1.rno);
	}
	printf("enter marks\n");
	scanf("%d",&std1.marks);
	
	if(choice=='y')
	{printf(" name is %s\n",std1.name);
	}
	else{printf(" rno is %d\n",std1.rno);
		
	}
	printf("marks are %d",std1.marks);
}
