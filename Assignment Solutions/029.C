#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("ENTER  :");
	scanf("%c",&a);
	switch(a)
	{
		case 'R':
		case 'r':

			printf("RED");
			break;
		case 'B':
		case 'b':
			printf("BLACK");
			break;
		case 'W':
		case 'w':
			printf("WHITE");
			break;
		case 'G':
		case 'g':
			printf("GOLD");
			break;
		case 'P':
		case 'p':
			printf("PINK");
			break;
		default:
			printf("INVALID");

	  }

	  getch();
}
