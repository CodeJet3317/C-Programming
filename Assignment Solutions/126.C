#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s=0;
	char s1[50];
	clrscr();

	printf("without space");
	scanf("%s",s1);

	printf("\n s1: %s",s1);
	for (i=0;s1[i]!='\0';i++)
	{
		printf("\n%c",s1[i]);
		s++;
	}
	printf("\nLENGTH : %d",s);

	getch();
}