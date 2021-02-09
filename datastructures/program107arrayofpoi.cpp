#include<stdio.h>
#include<malloc.h>
typedef struct
{
	int rno;
	char initial[20];
} employee;
employee *ptr[100];
main()
{ int opt=0,c=0,i;
	do
	{ printf("enter rno and name\n");
ptr[c]=(employee *)malloc(sizeof(employee));
	scanf("%d %s",&ptr[c]->rno,&ptr[c]->initial);
		printf("enter 0 for termination\n"); scanf("%d",&opt);
		c++;
	}while(opt!=0);
for(i=0;i<c;i++)
{
	printf("name and rno of %d student is %d %s\n",i+1,ptr[i]->rno,ptr[i]->initial);
}
}

