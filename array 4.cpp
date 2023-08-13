#include<stdio.h>
int main()
{
	int x;
	printf("enter the number of elments: ");
	scanf("%d ",&x);
	int a[100];
	int location;
	int elemint;
	int i;
	for(i=0;i<x;i++)
	scanf("%d",&a[i]);
	printf("enter the elment you want to incert: ");
	scanf("%d",&elemint);
	printf("enter the location: ");
	scanf("%d",&location);
	for(i=x;i>=location;i--){
		a[i]=a[i-1];
	}
	x++;
	a[location-1]=elemint;
	for(i=0;i<x;i++){
		printf("%d ",a[i]);
	}
	}