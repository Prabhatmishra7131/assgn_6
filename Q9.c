#include <stdio.h>
int main()
{
    int i, p, q;
    printf("Enter the numbers");
    scanf("%d %d", &p, &q);
    for (i = 1; i < p * q; i++)
    {
        if ((i % p == 0) && (i % q == 0))
            break;
    }
    printf("Thee LCM is %d", i);
    return 0;
}