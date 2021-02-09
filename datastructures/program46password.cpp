#include<stdio.h>
#include<string.h>
main()
{
	int i=0,s=0,t=0,L1;
	char a[100],b[100],c[100];
	printf("please choose a password\n");
	gets(a);
	printf("please reenter your password\n");
gets(b);
printf("saved successfully ");
for(t=0;t<80;t++)
{printf("\n");

}




L1=strlen(a);
 printf("enter password to enter\n");
 gets(c);i=0;t=0;
 while(i<L1)
 {if(a[i]!=b[i]) t++;i++;
 }
 if(t==0) printf("access ok you can enter\n");
 else printf("access denied please try again");
}
