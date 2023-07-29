#include<stdio.h>
int main()
{
char x;
float a,b;
float sum;
    printf("Enter an oprator either + or - or* or /:");
	scanf("%c",&x);
	if(x=='+') 
	{
	printf("Enter 2 oprands:");
	scanf("%f %f",&a,&b);
	sum=a+b;
	printf("%f + %f = ",a,b);
	printf("%f",sum);
	}
	else 	if(x=='-') 
	{
	printf("Enter 2 oprands:");
	scanf("%f %f",&a,&b);
	sum=a-b;
	printf("%f - %f = ",a,b);
	printf("%f",sum);
    }
    	else 	if(x=='*') 
	{
	printf("Enter 2 oprands:");
	scanf("%f %f",&a,&b);
	sum=a*b;
	printf("%f * %f = ",a,b);
	printf("%f",sum);
    }
    	else 	if(x=='/') 
	{
	printf("Enter 2 oprands:");
	scanf("%f %f",&a,&b);
	sum=a/b;
	printf("%f / %f = ",a,b);
	printf("%f",sum);
    }
}
	