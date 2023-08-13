#include<stdio.h>
int main()
{
	int x,y;
	printf("enter row and colum :");
	scanf("%d %d",&x,&y);
	int a[x][y];
	int t[x][y];
	int i,j;
	printf("enter element for matrix \n");
	for(i=0;i<x;++i)
	{
		for(j=0;j<y;++j)
		{
			printf("entera%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("enter the matrix \n");
	for(i=0;i<x;++i)
	{
		for(j=0;j<y;++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
    }
	for(i=0;i<x;++i)
	{
		for(j=0;j<y;++j)
		{
			t[j][i]=a[i][j];
		}
    }
    	printf("trans matrix \n");
	for(i=0;i<y;++i)
	{
		for(j=0;j<x;++j)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
    }
}

