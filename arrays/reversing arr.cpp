#include<stdio.h>
main()
{
	char a[20],t;
	int b,i=0,n,end;
printf("enter n \n");
scanf("%d",&n);
for(i=0;i<n;i++)
	{ 
	printf("enter ele\n");
	scanf(" %c",&a[i]);
	printf("valueo of a[%d]=%c\n",i,a[i]);
	}a[i]='\0';
	printf("\nbefore reversing\n");i=0;
while(a[i]!='\0')
{ printf("%c ",a[i]);i++;
}i=0;end=n-1;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;i++;end--;
}
printf("\nafter reversing\n");i=0;
while(a[i]!='\0')
{ printf("%c ",a[i]);i++;
}

}
