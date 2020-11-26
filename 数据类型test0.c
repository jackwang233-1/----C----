#include <stdio.h>
#include <math.h>

int main()
{
    long long a = pow( 3, 63);
    long long b = a / 25000; 
    printf("The King should give %lld wheats!\n If 25000 wheats weight 1 kg, it is %lld kg wheats!", a, b);
    
    return 0;
}
