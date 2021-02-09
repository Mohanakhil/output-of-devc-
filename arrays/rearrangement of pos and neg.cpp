#include<stdio.h>
main()
{
	int a[20],i,n,e[10],o[10],f=0,g=0,pos=0,neg=0;
	printf("enter no of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter ele\n");
		scanf("%d",&a[i]);
	}printf("before reversing\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);i=0;
	while(i<n)
		{
		if(a[i]>=0)
		{e[f]=a[i];f++;i++;pos++;
		}
		else
		{ o[g]=a[i];g++;i++;neg++;
		}
	}
	printf("\npos are \n");
for(f=0;f<pos;f++)
	 printf("%d ",e[f]);
	 printf("\nneg are\n");
	for(g=0;g<neg;g++) printf("%d",o[g]);
	i=0;g=0;f=0;
	while(i<n)
	{ if(e[f]!=0)
	 {
	 a[i]=e[f];i++;f++;
}
	 if(o[g]!=0)
	 { a[i]=o[g];i++;g++;
	 }
	}
	printf("after rearrangement\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
