#include <stdio.h>

int main()
{
    int count = 0;

    while (getchar() != '\n')
    {
        count += 1;
    }

    printf("You entered %d characters.", count);


    return 0;

}




