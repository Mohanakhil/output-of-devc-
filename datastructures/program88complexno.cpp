#include<stdio.h>
main()
{
	typedef struct complex
	{
		int real;
		int img;
	}complex;
	complex c1,c2,sum,diff;
	int opt;
	do{
		printf("************Main Menu************");
		printf("\n 1.Read the complex nos: ");
		printf("\n 2.Display the complex nos:");
		printf("\n 3.add both the nos: ");
		printf("\n 4.subtract both the nos: ");
		printf("\n 5.EXIT ");
		printf("\nenter your option\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: 
			printf("enter the real and imaginary parts of the 1st no\n");
				scanf("%d %d",&c1.real,&c1.img);
				printf("\nenter real and imaginary parts of the 2nd no\n");
				scanf("%d %d",&c2.real,&c2.img);
				break;
			case 2:
			 printf("\nthe first complex no is %d+%di\n",c1.real,c1.img);
			printf("\n the second complex no is %d+%di\n",c2.real,c2.img);
			break;
			case 3: 
			sum.real=c1.real+c2.real;
			sum.img=c1.img+c2.img;
			printf("\n the sum of two nos is %d+%di\n\n",sum.real,sum.img);
			break;
			case 4: diff.real=c1.real-c2.real;
			diff.img=c1.img-c2.img;
			printf("\n after subtracting both the nos is %d+%di\n\n",diff.real,diff.img);
			break;
		}}while(opt!=5);
		
	}
	

