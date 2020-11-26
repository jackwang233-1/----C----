#include <stdio.h>

int main()
{
    float xjy = 10000.0, hy = 10000.0;
    for (int i = 1; ; i++)
    {
        xjy = (1 + 0.1 * i) * 10000;
        hy *= 1.05;
        
        if (hy > xjy)
        {
            printf("it is %d years!\n", i);
            
            break;
        }
    }
    printf("Xiaojiayu has $%.2f\n", xjy);
    printf("Heiye has $%.2f\n", hy);
    
    return 0;   
        
    
    
}
    
