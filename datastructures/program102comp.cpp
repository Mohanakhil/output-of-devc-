#include<stdio.h>
typedef struct 
{
	int r;
	int i;
}complex;
complex c1,c2;
void sum(complex ,complex );
void sub(complex,complex);
main()
{
	printf("enter real and img of first no\n");
	scanf("%d %d %d %d",&c1.r,&c1.i,&c2.r,&c2.i);
	sum(c1,c2);
sub(c1,c2);
}
void sum(complex n1,complex n2)
{
	printf("after adding it is %d+%di",(n1.r+n2.r),(n1.i+n2.i));
}
void sub(complex n1,complex n2)
{
	printf("after subtraction it is %d+%di",(n1.r-n2.r),(n1.i-n2.i));
}
