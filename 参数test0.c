#include <stdio.h>
#include <math.h>

#define MAX 1024

char myitoa(int, char *a);

char myitoa(int num,char *str)
{
    int mid_str[MAX] = {0}, count = 1;


    int *p = mid_str;
//    printf("%d\n", (int)fabs(num));
//    printf("%d\n", (int)pow(10, count));

    while ((int)fabs(num) > (int)pow(10, ++count))
        ;
    printf("there is %d numbers.\n", count);
    int temp, count1;  // the number of the first now.
    count1 = count;

    num = (int)fabs(num);
//    while (count-- + 1)
    for (int i = 0; i < count1; i++)
    {
        count--;
        temp = num / (int)pow(10, count);
        *(p + i) = temp;
        num -= temp * (int)pow(10, count);

    }

    for (int i = 0; i < count1; i++)
    {

    *(str + i) = '0'+ *(p + i);

    }
    *(str + count1 ) = '0';

        return str;
}


int main()
{
        char str[10];

        printf("%s\n", myitoa(520, str));
        printf("%s\n", myitoa(-1234, str));

        return 0;
}
