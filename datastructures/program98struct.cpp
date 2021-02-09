#include<stdio.h>
void display(int *,int * );
typedef struct
{
	int x;int y;
	 } 	num;
	 num std1,std2;
main()
{

	 printf("enter a no\n");
	 scanf("%d",&std1.x);
	 printf("enter a no\n");
	 scanf("%d",&std2.y);
	 display(&std1.x,&std2.y);
	 printf("2 nos are %d %d",std1.x,std2.y);
	}
	void display(int *p, int *q)
	{
		int temp;
		temp=*p;
		*p=*q;
		*q=temp;
	}
