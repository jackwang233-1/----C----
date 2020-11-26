#include <stdio.h>
#include <math.h>

int main()
{
    long nx, rd = 1,  ls1 = 0, ls2 = 0;  // nx means next month rabbits, rd means ready, ls1 means last 1, ls2 means last 2.
       
    for (int i = 2; i <= 24; i++)
    {
        nx = rd + ls1 + ls2;
        rd += ls1;
        ls1 = ls2;
        ls2 = rd;
    }
    printf("2 years later there are %ld couple rabbits\n", nx  );
        
        
    
    
    
    
    return 0;   
        
    
    
}
    
