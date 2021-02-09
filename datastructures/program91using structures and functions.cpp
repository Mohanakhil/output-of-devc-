#include<stdio.h>
void display(int *,int *);
main()
{
	typedef struct point
	{
		int x;
		int y;
	 } point;
	 point p1;
	 printf("enter x and y coordinate\n");
	 scanf("%d %d",&p1.x,&p1.y);
	 display( &p1.x,&p1.y);
	 printf("the coordinates after adding 1 are %d %d",p1.x,p1.y);
	 
}
void display(int *a,int *b)
{ printf("the coordingates are %d %d",*a,*b);
*a=*a+1;*b=*b+1;	
}

