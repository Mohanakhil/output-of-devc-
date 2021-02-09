#include<stdio.h>
void add(int, int, int, int);
void sub(int, int, int, int);
main()
{	typedef struct 
	{
		int km;
		int m;
	 } distance;
	 distance d1,d2;
	 printf("enter first value in km and metres\n");
	 scanf("%d %d",&d1.km,&d1.m);
	 printf("enter second value \n");
	 scanf("%d %d",&d2.km,&d2.m);
	 add(d1.km,d1.m,d2.km,d2.m);
	 sub(d1.km,d1.m,d2.km,d2.m);
	 }
void	 add(int a,int b, int c, int d)
	 {
	 	printf("value of distance after adding is %d.%dkms",(a+c),(b+d));
	 	
	 }
	 
void	  sub(int a, int b, int c, int d)
	 {
	 	printf("value of distance after subtracting is %d.%dkms",(a-c),(b-d));
	 	
	 }
