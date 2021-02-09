#include<stdio.h>
typedef struct
{
	int km;
	int m;
} distance;
distance d1,d2;
void sum(distance,distance);
void sub(distance,distance);
main()
{
	printf("enter first and second distance\n");
	scanf("%d %d %d %d",&d1.km,&d1.m,&d2.km,&d2.m);
	sum(d1,d2);
sub(d1,d2);
}
void sum(distance n1,distance n2)
{
	distance s;
	s.km=n1.km+n2.km;
	s.m=n1.m+n2.m;
	while(s.m>=1000)
	{
		s.m=s.m%1000;
		s.km=s.km+1;
	}
	printf("sum of distances is %dkm and %dm\n",s.km,s.m);
}
void sub(distance n1,distance n2)
{
	distance d;
	if(n1.km>n2.km)
	{
	d.km=n1.km-n2.km;
	d.m=n1.m-n2.m;}
	else 
	{
		d.km=n2.km-n1.km;
		d.m=n2.m-n1.m;
	}
while(d.m<0)
{ d.km=d.km-1;
d.m=d.m+1000;
}
printf("diff is %dkm and %dm \n",d.km,d.m);
}

