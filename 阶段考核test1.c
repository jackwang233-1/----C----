#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, j = 2, num = 0;
    
    while (i <= 4000000 && j <= 4000000)
    {
        if (i < j)
        { 
            i += j;
            if (i % 2 == 0)
            {
                num += i;
            }
        }
        if (j < i)
        {
            j += i;
            if (j % 2 == 0)
            {
                num += j;
            }
        }
    }
    printf("num is %d\n", num + 2);
    
    
    
    
    
    
    return 0;
}
    
