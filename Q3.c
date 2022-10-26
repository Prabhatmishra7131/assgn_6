#include<stdio.h>
int main()
{
   int n,i,sum=0;
   printf("Enter the no. of terms:");
   scanf("%d",&n);
   for ( i = 1; i<=2*n-1; i+=2)
   {
      sum+=i;
   }
   printf("Sum of first %d odd natural no.s is: %d\n",n,sum);
   return 0;
}