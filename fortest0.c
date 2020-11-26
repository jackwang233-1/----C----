#include <stdio.h>

int main()
{
    printf("weight(kg) -- cost(yuan)\n");
    for (int wt = 1; wt <= 20; wt++)
    {
        printf("%5d      -- %7d\n", wt, (23 - 14) + 14 * wt);
    }
    
    return 0;
}
