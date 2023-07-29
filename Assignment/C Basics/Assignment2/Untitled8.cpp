#include<stdio.h>
int main()
{
	int x;
	printf("Enter an integer you want to check:");
	scanf("%d",&x);
	if(x%2==0){
		printf(" num is even");
	}
	else 
	printf("num is odd");
}