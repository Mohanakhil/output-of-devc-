#include<stdio.h>
main()
{
	{
		int x=10,y=20;
		{
			printf("one x=%d y=%d\n",x,y);
			{  y=40;
			x++;y++;
			printf("second x=%d,y=%d\n",x,y);
			}
			printf("third x=%d,y=%d\n",x,y);
		}
	}
}
