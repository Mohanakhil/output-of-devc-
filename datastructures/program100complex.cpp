#include<stdio.h>
struct complex
	{
		int real;
		int img;
	};
	void sum(int,int,int,int,int *,int *);
	void sub(int,int,int,int,int *,int *);
main()
{
	int sum1,sum2;
	
	struct complex n1,n2;
	printf("enter first complexno\n");
	scanf("%d %d",&n1.real,&n1.img);
	printf("enter second no\n");
	scanf("%d %d",&n2.real,&n2.img);
	sum(n1.real,n1.img,n2.real,n2.img,&sum1,&sum2);


	printf("sum of 2nos is %d+%di\n",sum1,sum2);
}
void sum(int a,int b,int c,int d,int *r,int *s)
{
	*r=a+c;
	*s=b+d;
}

