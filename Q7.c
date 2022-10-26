#include <stdio.h>
int main()
{
    int n, rem, count = 0;
    printf("Enter the no");
    scanf("%d",&n);
    while (n != 0)
    {
        
        n = n / 10;
       
            count++;
    }
    printf("The no. of digits is %d", count);
    return 0;
}