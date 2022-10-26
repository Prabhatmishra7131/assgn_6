#include<stdio.h>
int main()
{
   int n,i,sum=0;
   printf("Enter the no. of terms:");
   scanf("%d",&n);
   for ( i = 0; i <n; i++)
   {
      sum+=i;
   }
   printf("Sum of first %d natural no.s is:%d\n",n,sum);
   return 0;
}