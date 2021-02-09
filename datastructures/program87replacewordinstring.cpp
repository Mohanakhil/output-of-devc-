#include<stdio.h>
#include<string.h>
main()
{ int i=0,j=0,l1=0,m=0,k=0,c=0,len,d=0,l2=0,n=0,l3,l4;
char a[100],b[100],e[100],f[100];
printf("enter a string \n");
gets(a); printf("enter a word\n");
gets(b);l1=strlen(b); printf("enter a new string\n");gets(e);l2=strlen(e);l3=l1;l4=l2;
while(a[i]!='\0')
{ m=i;
while(a[i]==b[j])
{ c++;i++;j++;	
} 
if(c==l3)
{ while(l4>=0)
{ f[k]=e[n];k++;n++;l4--;
}}
else
{i=m; f[k]=a[i];k++;
	
}i=m+1;l3=l1;l4=l2;j=0;n=0;c=0;	} f[k]='\0';printf("after replacement it is\n"); puts(f);
}
