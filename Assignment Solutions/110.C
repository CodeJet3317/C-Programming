#include<stdio.h>
#include<conio.h>
void main()
{
	int a[500],i,n,m;
	clrscr();
	printf("ENTER THE SIZE : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("ENTER THE ELMENT  %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)

	{
		printf("\n%d",a[i]);

	}
	m=a[0];
	for (i=0;i<n;i++)
	{
		if (m<a[i])
		{
			m=a[i];

		}
	}
	printf("\nMAX : %d",m);
	for (i=0;i<n;i++)
	{
		if (m>a[i])
		{
			m=a[i];

		}
	}
	printf("\nMIN : %d",m);




	getch();
}