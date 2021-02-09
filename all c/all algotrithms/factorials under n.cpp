#include<stdio.h>
int main()
{
	int i=1,factorial=1,n;
	scanf("%d",&n);
do
	{  int number=i;
	factorial=1;
	while(number>0)
	{factorial=factorial*number;
	number--;
	}
	if(factorial<n||(factorial==1))
	printf("%d ",factorial);
	i++;
		
	}	while(factorial<n);
}
