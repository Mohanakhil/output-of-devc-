#include<stdio.h>
#include<malloc.h>
 struct emp
{
	char idname[30];
	int rno;
};
struct emp *e[10];
main()
{ int n,c=0,i=0;

	do
	{ e[i]= (struct emp *)malloc(sizeof(struct emp));
		printf("enter rno\n");
		scanf("%d",&e[i]->rno);
		printf("enter idname\n");
scanf("%s",e[i]->idname);
		c++;i++;
		printf("enter next student details\n");
		scanf("%d",&n);
	} while(n!=0);
for(n=0;n<c;n++)
{
	printf("\n\nname of %d employee is \n",n+1);
	puts(e[n]->idname);
	printf("\nrno of %d employee is %d\n",n+1,&e[n]->rno);
	
	}	
}

