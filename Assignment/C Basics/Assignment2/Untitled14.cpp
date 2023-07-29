#include<stdio.h>
#include<math.h>
int main()
{
int x;
int sum=1;
    printf("Enter an integer:");
	scanf("%d",&x);
if (x<0)
    {
	printf("erorr!!! Factorial of negative number doesn't exist ");
	}
	else
	  {
	
for(int i=1;i<=x;i++)
{
    sum=sum*i;
}	
printf("sum= %d",sum);
      }

}