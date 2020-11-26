#include <stdio.h>



int main()
{
        int year, i ;
        int month[12];

        printf("Input a year:");
        scanf("%d", &year);

        for (i = 1; i <= 12; i++)
        {
            printf("%2d yuefen:", i);
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                month[i - 1] = 31;
                printf("%2ddays\n", month[i - 1]);

            }
            else if (i == 2)
            {
                if (year % 400 == 0)
                {
                    month[i - 1] = 29;
                    printf("%2ddays\n", month[i -1]);
                }
                else if (year % 100 != 0)
                {
                    if (year % 4 == 0)
                    {
                        month[i - 1] = 29;
                        printf("%2ddays\n", month[i -1]);
                    }
                    else
                    {
                        month[i - 1] = 28;
                        printf("%2ddays\n", month[i -1]);
                    }
                }
            }
            else
            {
                {
                    month[i - 1] = 30;
                    printf("%2ddays\n", month[i -1]);
                }
            }
        }


        return 0;
}
