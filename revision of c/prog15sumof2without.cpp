#include<stdio.h>
main()
{ int a,b;
	printf("enter 2 nos\n");
	scanf("%d %d",&a,&b);
	if(b>0)
	while(b>0)
{
		a++;
	b--;}
	if(b<0)
	while(b<0)
	{
		b++;
		a--;
	}
	printf("\nsum is %d",a);
}
