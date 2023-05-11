#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,i,n,ce=0,co=0;
	FILE *fp,*fe,*fo;
	clrscr();

	fp=fopen("e:\\c\\all.txt","w");

	printf("Enter the Numbers : ");
	for (i=1;i<=10;i++)
	{
		scanf("%d",&a);
		putw(a,fp);
	}
	fclose(fp);

	fp=fopen("e:\\c\\all.txt","r");
	fe=fopen("e:\\c\\even.txt","w");
	fo=fopen("e:\\c\\odd.txt","w");

	printf("\n\tALL.txt");
	for (i=1;i<=10;i++)
	{
		b=getw(fp);
		printf("\n %d",b);

		if(b%2==0)
		{
			putw(b,fe);
			ce++;
		}
		else
		{
			putw(b,fo);
			co++;
		}
	}

	fclose(fp);
	fclose(fe);
	fclose(fo);

	printf("\n\tEven.txt");
	fp=fopen("e:\\c\\even.txt","r");

	for(i=1;i<=co;i++)
	{
		b=getw(fp);
		printf("\n %d",b);
	}
	fclose(fp);
	printf("\n\tOdd.txt");
	fp=fopen("e:\\c\\odd.txt","r");

	for(i=1;i<=co;i++)
	{
		b=getw(fp);
		printf("\n %d",b);
	}
	fclose(fp);
	getch();
}