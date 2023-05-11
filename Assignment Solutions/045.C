#include<stdio.h>
#include<conio.h>
void main()
{
	int o=0,e=0,i,n;
	clrscr();
	printf("ENTER THE N:");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{

		if(i%2==0)
		{
			printf("\neven:%d",i);
			e=e+i;
		}
		else
		{
			printf("\nodd:%d",i);
			o=o+i;
		}
	}
	printf("\n SUM OF ODD:%d",o);
	printf("\n SUM OF EVEN:%d",e);

	getch();
}