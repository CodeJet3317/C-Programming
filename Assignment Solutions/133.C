#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50];
	int i,n;
	clrscr();
	printf("ENTER WITHOUT SPACE : ");
	scanf("%s",s1);
	printf("s1: %s\n",s1);
	for (i=0;s1[i]!='\0';i++)
	{
		if (s1[i]>='a' && s1[i]<='z')
		{
			s1[i]=s1[i]-32;
		}
		else if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i]=s1[i]+32;
		}
	}

	printf("%s",s1);
	getch();
}