#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long a = pow( 1, 2) + pow( 2, 3) + pow( 3, 4) + pow( 4, 5) + pow( 5, 6);
    printf("The answer is % 8ld\n", a);
    
    return 0;
}
