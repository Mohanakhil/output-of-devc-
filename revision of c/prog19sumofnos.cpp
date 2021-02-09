#include<stdio.h>
int s(int);
main()
{ int i,a,b,sum=0,c[10];
printf("enter range of  nos\n");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{ 
	sum=s(i);
}
printf("the sum  of nos is %d",sum);
	
}
int s(int k)
{ int sum;
	sum=sum+k;
	return sum;
}
