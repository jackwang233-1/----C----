#include <stdio.h>
#include <math.h>

int main()
{
    long long a = pow( 2, 64) - 1;
    float b = a / 25000; 
    printf("The King should give %lld wheats!\n If 25000 wheats weight 1 kg, it is %.2f kg wheats!", a, b);
    
    return 0;
}
