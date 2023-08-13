#include<stdio.h>
int main()
{
	char a[100];
	int i,count=0;
	char k;
	printf("enter a string :");
	gets(a);
	printf("inter the freq ");
	scanf("%c",&k);
	for(i=0;a[i]!='\0';++i){
		if(k==a[i])
		{
		++count;
		}
		
		
		
	}
	printf("fre of %c =%d",k,count);
	
}