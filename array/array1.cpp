#include<stdio.h>
int main()
{
	float a[2][2];
	float b[2][2];
	float m[2][2];
	int r,c;
	printf("enter element for matrix 1\n");
	for(r=0;r<2;++r)
	{
		for(c=0;c<2;++c)
		{
			printf("entera%d%d:",r+1,c+1);
			scanf("%f",&a[r][c]);
		}
		
	}
	printf("enter element for matrix 2\n");
	for(r=0;r<2;++r)
	{
		for(c=0;c<2;++c)
		{
			printf("enterb%d%d:",r+1,c+1);
			scanf("%f",&b[r][c]);
		}
		
	}
	for(r=0;r<2;++r)
	{
		for(c=0;c<2;++c)
		{
			m[r][c]=a[r][c]+b[r][c];
		}
		
	}
	printf("the sum\n");
		for(r=0;r<2;++r)
	{
		for(c=0;c<2;++c)
		{
		   printf("%.1f\t",m[r][c]);
		   
		}
		printf("\n");
	}
}
	
