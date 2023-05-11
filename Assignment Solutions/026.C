#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("ENTER:");
	scanf("%c",&a);
	if (a=='a'|| a=='e' || a=='i'|| a=='o'|| a=='u'  )
	{
		printf("%c IS A VOWEL",a);
	}
	else
	{
		printf("%c IS NOT A VOWEL",a);
	}
	getch();
}