#include<stdio.h>
int main()
{
   char a[100];
   int i;

   printf("enter a string :");
   scanf("%s",a);
   for(i=0;a[i];i++);
   printf("revers ");
   for(i=i-1;i>=0;i--){
   	printf("%c",a[i]);
   }

}