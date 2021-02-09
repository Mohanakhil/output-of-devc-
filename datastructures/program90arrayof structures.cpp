#include<stdio.h>
main()
{
	typedef struct student
	{
		int rno;
		char name[100];
		char dob[100];
	} student ;
	student std[50];
	int n=0,c=0,newno,i=0,opt;
	char newname[100],newdob[100];
	do{ c++;
		printf("enter rollno student\n");
		scanf("%d",&std[i].rno);
		printf("enter name of student\n");
		scanf("%s",&std[i].name);
		printf("enter date of birth in dd/mm/yy format\n");
		scanf("%s",&std[i].dob);
		printf("for entering next student press 1 or for termination press 0\n");
		scanf("%d",&opt);i++;
	} while(opt!=0);
	for(i=0;i<c;i++)
	{
		printf("details of student %d are :-\n ",i+1);
		printf("roll no is %d\n",std[i].rno);
		printf("name is= %s \n",std[i].name);
		printf("date of birth is= %s \n\n",std[i].dob);
		
	} printf("\nenter the rollno of  student to modify details\n ");
	scanf("%d",&newno);newno=newno-1;
	printf("enter new name\n");
	scanf("%s",&std[newno].name);
	printf("enter new dob\n");
	scanf("%s",&std[newno].dob);
	std[newno].rno=newno+1;
		for(i=0;i<c;i++)
	{
		printf("details of student %d are :-\n ",i+1);
		printf("roll no is %d\n",std[i].rno);
		printf("name is= %s \n",std[i].name);
		printf("date of birth is= %s \n\n",std[i].dob);
		
	}
	
	
	
	
	
	
}
