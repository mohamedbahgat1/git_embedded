#include<stdio.h>
int main()
{
	float x,y,z;
	printf("Enter three nom:");
	scanf("%f %f %f",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
			printf("largest %f",x);
		
		else 
			printf("largest %f",z);
	
	}
		else
		{
			if (y>z)
			printf("largest %f",y);
			else 
			printf("largest %f",z);
		}
	}

	