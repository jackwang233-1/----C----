#include <stdio.h>

int main()
{
    float str[][12] = {
        {-1, -1, -1, -1, -1, -1, 31.3, 35.5, 58.7, 49.6, 55.5},
        {59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5},
        {34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, -1, -1, -1, -1}};
    float (*p)[12] = str;


    int year, month;

    do
    {
        printf("input the date you want to search(e.g. 2015-01):");
        scanf("%d-%d", &year, &month);

    }while (!(year >= 2014 && year <= 2016 && month >= 1 && month <= 12));

    float pm;

    pm = *(*(p + year - 2014) + month -1);

    if (pm < 0)
    {
        printf("sry, that month's pm is not record.\n");
    }
    else
    {
    printf("In %d,%d,the PM2.5 is : %.1f\n", year, month, pm);
    }

    return 0;
}

