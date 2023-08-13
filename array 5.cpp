	#include<stdio.h>
	int main()
	{
		int h;
		int i,n;
		int a[100];
		printf("enter no of elemint: ");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		printf("enter the elemint to be serched: ");
		scanf("%d",h);
		for(i=0;i<n;i++){
			if(a[i]==h)
			{
				printf("number found: %d",i+1);
			}
			
		
		}
		if(i==n)
		printf("number not found");
	}