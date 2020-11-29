#include <stdio.h>
#include <stdarg.h>

int sum(int n, ...);

int sum(int n, ...)
{
        int i, sum = 0;
        va_list vap;
        
        va_start(vap, n);
        for (i = 0; i < n; i++)
        {
            sum += va_arg(vap, int);
        }
        va_end(vap);
        
        return sum;
    
}




int main()
{
    int result;
    
    result = sum(3, 1, 2, 3);
    printf("result = %d\n", result);
    
    result = sum(6, 1, 22, 55, 66, 99, 3);
    printf("result = %d\n", result);
     
    result = sum(4, 13, 2, 3, 66);
    printf("result = %d\n", result);
    
    
    
    return 0;
}
