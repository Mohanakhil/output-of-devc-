#include<stdio.h>
main()
{
  struct student
	{
		int rno;
		char name[100];
		float fees;
		char DOB[100];
		
	}; struct student stud1;
	printf("enter rono\n");
	scanf("%d",&stud1.rno);
	printf("enter name\n"); 
	scanf("%s",stud1.name);
	printf("enter fees\n"); 
	scanf("%f",&stud1.fees);
	printf("enter dob\n"); 
	scanf("%s",stud1.DOB);
	
	printf("details of student1 are \n");
	printf("%d\n",stud1.rno);
	printf("%s\n",stud1.name);
	printf("%f\n",stud1.fees);
	printf("%s\n",stud1.DOB);
	
}
