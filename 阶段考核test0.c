#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0;
    for(int i = 5; i < 1000; i++)
    {
        if (i % 3 == 0)
        {
            num += i;
            continue;
        }
        else if(i % 5 == 0)
        {
            num += i;
        }
    }

    printf("num is %d\n", num + 3);

    return 0;
}

