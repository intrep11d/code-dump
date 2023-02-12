#include<stdio.h>

int main(){

    int i,n,rows;
   printf("Input number: ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(n=1;n<=i;n++)
	   printf("%d",n);
	printf("\n");
   }
}