#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = i; j <= 9; j++)
        {
            printf("i = %d, j = %d, i * j = %d\n", i, j, i * j);
        }
        
    }
    
    return 0;
}
