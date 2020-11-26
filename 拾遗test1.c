#include <stdio.h>

int main()
{
 
    float xjy = 400.0;
    
    for (int i = 1; ; i++)
    {
        xjy = ( xjy - 50) * 1.08;
        
        if (xjy < 0)
        {
            printf("It is %d years!\n", i);
            break;
        }
    }
    
        
    
    
    
    return 0;   
        
    
    
}
    
