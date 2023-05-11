#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s=0,m=0;
	char s1[50];
	clrscr();

	printf("without space");
	scanf("%s",s1);

	printf("\n s1: %s",s1);
	for (i=0;s1[i]!='\0';i++)
	{
		if (s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U')
		{
			s++;
		}
		else
		{
			m++;
		}

	}
	printf("\nVOWEL : %d",s);
	printf("\nCONSONANTS : %d",m);


	getch();
}