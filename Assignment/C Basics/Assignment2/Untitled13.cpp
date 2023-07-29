#include<stdio.h>
int main()
{
int x;
    printf("Enter an integer:");
	scanf("%d",&x);
	int sum;
for(int i=0;i<=x;i++){
	sum=sum+i;
}	
printf("sum= %d",sum);
}