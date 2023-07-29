#include<stdio.h>
int main()
{
	char x;
	printf("Enter an alphabet:");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':
		case 'e':
		case 'o':
		case 'i':
			{
				printf("is vowel");
			}
			break;
			default :
			printf("is constant");
			break; 
	}
}
