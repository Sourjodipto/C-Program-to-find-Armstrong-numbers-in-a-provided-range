#include <stdio.h>
#include <math.h>

int main()
{
    int min, max, n, k1, k2, r, i = 0, sum = 0;
    printf("Insert the start value and end value :");
    scanf("%d %d", &min, &max);

    for (n = min; n < max; n++)
    {
        k2 = n;
        k1 = n;

        while (k1 != 0)
        {
            k1 = k1 / 10;
            ++i;
        }
        while (k2 != 0)
        {
            r = k2 % 10;
            sum = sum + pow(r, i);
            k2 = k2 / 10;
        }
        if (sum == n)
        {
            printf("Armstrong number: %d\n ", n);
        }
        i = 0;
        sum = 0;
    }
    printf("\n");
    return 0;
}