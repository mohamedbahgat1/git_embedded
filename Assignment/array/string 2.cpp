#include<stdio.h>
int main()
{
	char a[100];
	int i,count=0;
	printf("enter a string :");
	gets(a);
	for(i=0;a[i]!='\0';++i){
	
		++count;	
		
	}
	printf("lenth of string %d ",count);
	
}