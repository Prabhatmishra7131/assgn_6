#include <stdio.h>
int main()
{
    int n, rem, p=0;
    printf("Enter the no.");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        p = p*10+rem;
        
    }
    printf("the reversed no is %d", p);
    return 0;
}