#include<stdio.h>
void main()
{
	int i,a,b=1,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a-i;j++)
		{
				printf(" ");
		}
		for(k=1;k<i*2;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=a-1;i>=1;i--)
	{
		for(j=1;j<=b;j++)
		{
				printf(" ");
		}
		for(k=1;k<i*2;k++)
		{
			printf("*");
		}
		printf("\n");
		b++;
	}
}
