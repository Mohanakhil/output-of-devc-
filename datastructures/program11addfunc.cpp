#include<stdio.h>
void add(int *);
int main()
{
	int n=2;
	printf("\n value of num before calling=%d",n);
	add(&n);
	printf("\n value of num after calling=%d",n);
	return 0;
	}
	void add(int *k)
	{
		*k=*k+10;
		printf("\nthe value of num in called function =%d",*k);
		
	}
