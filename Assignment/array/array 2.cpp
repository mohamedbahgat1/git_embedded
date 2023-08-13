#include<stdio.h>
int main()
{
	float a[100];
	float avg;
	float sum;
	int x;
	int i;
	printf("enter the number of data: ");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("enter number : ");
	    scanf("%f",&a[i]);
	    sum=sum+a[i];
	}
	avg=sum/x;
	printf("avrage= %.2f ",avg);
}