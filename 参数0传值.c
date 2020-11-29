#include <stdio.h>

void swap(int, int);

void swap(int x, int y)
{
        int temp;
        
        printf("In swap, before: x = %d, y = %d\n", x, y);
        
        temp = x;
        x = y;
        y = temp;
        printf("In swap, after: x = %d, y = %d\n", x, y);
        
}

int main() 
{
    int x = 3, y = 5;
    
        printf("In main, before: x = %d, y = %d\n", x, y);
        swap(3, 5);
        printf("In main, after: x = %d, y = %d\n", x, y);
        
    
    return 0;
}
