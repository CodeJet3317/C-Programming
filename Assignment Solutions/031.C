#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float n,m,s;
	clrscr();
	printf("1.ADDITION \n2.SUBTRACTION \n3.MULTIPLY \n4.DIVISION");
	printf("\nENTER CHOICE :");
	scanf("%d",&a);
	printf("Enter no 1:");
	scanf("%f",&n);
	printf("Enter no 2:");
	scanf("%f",&m);
	switch(a)

	{
		case 1:
			s=n+m;
			printf("ANS:%.2f",s);
			break;
		case 2:
			s=n-m;
			printf("ANS:%.2f",s);
			break;
		case 3:
			s=n*m;
			printf("ANS:%.2f",s);
			break;
		case 4:
			s=n/m;
			printf("ANS:%.2f",s);
			break;



	}

	getch();
}