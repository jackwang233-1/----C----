#include <stdio.h>

int main(void)
{
        char result[3][4] = {"aaf", "bbd", "cce"};
        char (*p2)[4] = &result[0];
        char (*pp2)[3][4] = &result;
        
    printf("d = %c, f = %c, bbd = %s, cce = %s\n", *(*(p2 + 1) + 2), *(**pp2 + 2), *(p2 + 1), *(*(pp2) + 2));
        return 0;
}

   
