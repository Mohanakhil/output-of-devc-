#include<stdio.h>
typedef struct 
{
	int rno;
	char name[20];
	int rank;
}student;
student p[100],s[100];
void dis(int,student);
main()
{ int i=0,opt,c=0;
	do
	{
	c=c+1;
	printf("enter rno and rank\n");
	scanf("%d %d",&s[i].rno,&s[i].rank);
	printf("enter name\n");
	scanf("%s",&s[i].name);
	printf("enter 0 for termination\n");
	scanf("%d",&opt);i=i+1;
}while(opt!=0);
for(i=0;i<c;i++)
{
printf("name of student %d is %s \n",i+1,s[i].name);
	
	printf("rno and rank of %d student is %d %d \n\n\n",i+1,s[i].rno,s[i].rank);
}
 
	
}
