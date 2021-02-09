#include<stdio.h>
main()
{
	printf("current file is %s\n",--FILE--);
	printf("date is %s\n",_DATE_);
	printf("time is %s\n",_TIME_);
	printf("line no is %d",_LINE_);
}
