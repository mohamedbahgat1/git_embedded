#include<stdio.h>
int main()
{
	char x;
	printf("Enter an alphabet:");
	scanf("%c",&x);
	if((x>='a' && x<='z')||(x>='A'&& x<='Z'))
	printf("is alphabet");
	else 
	printf("not an alphabet");
}