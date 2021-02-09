#include<stdio.h>
int main()
{
int m,n,i,f=0,j;
printf("enter range of nos\n");
scanf("%d %d",&m,&n);printf("\n");
for(i=m;i<=n;i++)
{
	for(j=2;j<(i/2);j++)
	{
		if(i%j==0)
		{
		f=1;break;
		}
	}if(f==1);
	else
	printf("%d is ",i);
}return 0;
}
