#include<stdio.h>
main()
{
	typedef struct
	{
		char firstname[20];
		char secondname[20];
		char lastname[20];
	 } NAME;
	 typedef struct
	 {
	 	char dd[20];
	 	char mm[20];
	 	char yy[20];
	 } DATE;
	 typedef struct
	 {
	 	int rno;
	 	NAME n;
	 	char course[20];
	 	DATE d;
	 	float fees;
	 } student;
	 student std1;
	 printf("enter rollno\n");
	 scanf("%d",&std1.rno);
	 printf("enter firstname\n");
	 scanf("%s",&std1.n.firstname);
	 printf("enter middle name\n");
	 scanf("%s",&std1.n.secondname);
	 printf("enter last name\n");
	 scanf("%s",&std1.n.lastname);
	 printf("enter course name\n");
	 scanf("%S",&std1.course);
	 printf("enter fees of course\n");
	 scanf("%f",&std1.fees);
	 printf("enter date of dob");
	 scanf("%s",&std1.d.dd);
	 printf("enter month of dob\n");
	 scanf("%s",&std1.d.mm);
	 printf("enter year\n");
	 scanf("%s",&std1.d.yy);
	 printf("dob is %s%s%s \n",std1.d.dd,std1.d.mm,std1.d.yy);
	 printf("full name is %s %s %s",std1.n.firstname,std1.n.secondname,std1.n.lastname);
}
