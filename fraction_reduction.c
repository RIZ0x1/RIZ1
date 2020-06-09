#include <stdio.h>
#include <stdlib.h>

int     fraction_reduction(int a, int b);
void    errors_handing(int a, int b);

int     main()
{
        int     a;
        int     b;
        int     gcd;

        printf("numenator   >: ");
        scanf("%d", &a);
        printf("denominator >: ");
        scanf("%d", &b);

        gcd = fraction_reduction(a, b);

        printf("\n");
        printf("               %d \n", (a / gcd));
        printf("answer      <: -  \n");
        printf("               %d \n\n", (b / gcd));

        return (0);
}

int     fraction_reduction(int a, int b)
{
        int     min;
        int     i;

        if (a < b)
                min = a;
        else
                min = b;

        errors_handing(a, b);

        i = min;
        while (i >= 1)
        {
                if ((a % i == 0) && (b % i == 0))
                        return (i);
                (i--);
        }
        return (1);
}

void    errors_handing(int a, int b)
{
        if      (a == 0 || b == 0)
        {
                printf("ERROR: Zero in fraction \n");
                exit(2);
        }
        else if (a == b)
        {
                printf("ERROR: The fraction is equal to 1 \n");
                exit(2);
        }
}
