#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter The No:");
	scanf("%d",&a);
	(a%2==0)
	? printf("%d IS AN EVEN",a)
	: printf("%d IS A ODD",a);
	getch();
}