#include <stdio.h>
#include <math.h>

int main()
{
   
    long temp = 600851475143;
    int i = 2, count1 = 0, count2 = 0;
    
    printf("the answer is :");
    for (; ;)
    {
        count2 = count1;
        for( i = 2; i <= temp / 2; i++)
        {
            if (temp % i == 0)
            {
                printf("%d, ", i);
                temp /= i;
                count1 += 1;
                break;
            }
        }
        if (count1 == count2)
        {
            break;
        }
       
    }
    
    
    
    return 0;
}
    
