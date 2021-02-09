#include<stdio.h>
typedef struct 
{
	char first[10];
	char sec[10];
	char last[20];
}name;
typedef struct
{
	char dd[4];
	char mm[4];
	char yy[4];
}date;
typedef struct
{
	int rno;
	name n;
	date d;
}student;
 student s1;
main()
{

printf("enter rno\n");
scanf("%d",&s1.rno);
printf("enter first sec and lastname\n");
scanf("%s %s %s",&s1.n.first,&s1.n.sec,&s1.n.last);
printf("enter dob\n");
scanf("%s %s %s",&s1.d.dd,&s1.d.mm,&s1.d.yy);

printf("rno is %d",s1.rno);
printf("\n fullname of student is %s%s%s \n",s1.n.first,s1.n.sec,s1.n.last);
printf("\ndob is %s%s%s\n",s1.d.dd,s1.d.mm,s1.d.yy);
}
