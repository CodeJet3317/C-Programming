#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50],s2[50];
	int i,flag=0,l1=0,l2=0;
	clrscr();
	printf("WITHOUT SPACE : ");
	scanf("%s",s1);
	printf("WITHOUT SPACE : ");
	scanf("%s",s2);

	for(i=0;s1[i]!='\0';i++)
	{
		l1++;
	}

	for(i=0;s2[i]!='\0';i++)
	{
		l2++;
	}
	if(l1!=l2)
	{
		printf("not same according to length");
	}
	else
	{
		for (i=0;s1[i]!='\0';i++)
		{
			if(s1[i]!=s2[i])
			{
				flag=1;
			}
		}
		if (flag==1)
			printf("NOT EQUAL");
		else
			printf("EQUAL");
	}
	getch();
}