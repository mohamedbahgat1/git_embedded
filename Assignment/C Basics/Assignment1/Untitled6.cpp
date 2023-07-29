#include<stdio.h>
int main(){
	float a;
	float b;
	float c;
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, value of a =%f\n",a);
	printf("After swapping, value of b =%f",b);
}