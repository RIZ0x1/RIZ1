#include <stdio.h>
#include <stdlib.h>

int     least_common_multiple(int a, int b);
void    error_handing(int a, int b);
void    find_dividers(int x, int *dividers);
int     summ_of_dividers(int *dividers);
void    equalization(int *aDividers, int *bDividers);

int     main()
{
        int     a;
        int     b;

        a       = 0;
        b       = 0;

        printf("a>: ");
        scanf("%d", &a);
        printf("b>: ");
        scanf("%d", &b);
        printf("LCM(%d; %d) = %d \n", a, b, least_common_multiple(a, b));
        return (0);
}

int     least_common_multiple(int a, int b)
{
        int     aDividers[33];
        int     bDividers[33];
        int     aSumm;
        int     bSumm;

        error_handing(a, b);
        find_dividers(a, aDividers);
        find_dividers(b, bDividers);
        aSumm   = summ_of_dividers(aDividers);
        equalization(aDividers, bDividers);
        bSumm   = summ_of_dividers(bDividers);

        return (aSumm * bSumm);
}

void    error_handing(int a, int b)
{
        if (a == 0 || b == 0)
        {
                printf("ERROR: Numbers can't be set to zero \n");
                exit(2);
        }
        if (a < 0 || b < 0)
        {
                printf("ERROR: Numbers can't be negative \n");
                exit(2);
        }
}

void    find_dividers(int x, int *dividers)
{
        int     div;

        div = 2;
        while (x != 1)
        {
                if (x % div == 0)
                {
                        x               = (x / div);
                        *dividers       = div;
                        (dividers++);
                        div             = 2;
                }
                else
                {
                        (div++);
                }
        }
        *dividers = -1;
}

int     summ_of_dividers(int *dividers)
{
        int     summ;

        summ = 1;
        while (*dividers != -1)
        {
                summ = (summ * (*dividers));
                (dividers++);
        }
        return (summ);
}

void    equalization(int *aDividers, int *bDividers)
{
        int     i;
        int     j;

        i = 0;
        j = 0;
        while (aDividers[i] != -1)
        {
                while (bDividers[j] != -1)
                {
                        if (aDividers[i] == bDividers[j])
                        {
                                bDividers[j] = 1;
                                break;
                        }
                        (j++);
                }
                j = 0;
                (i++);
        }
}
