#include <stdio.h>

void swap(int *c, int *d);

void swap(int *a, int *b)
{
        int temp;       // 地址不变，将值传入地址可以用，改地址没用
        
        printf("In swap, before: x = %d, y = %d\n", *a, *b);
        
        temp = *a;
        *a = *b;
        *b = temp;
        printf("In swap, after: x = %d, y = %d\n", *a, *b);
        
}

int main() 
{
    int x = 3, y = 5;
    
        printf("In main, before: x = %d, y = %d\n", x, y);
        swap(&x, &y);
        printf("In main, after: x = %d, y = %d\n", x, y);
        
    
    return 0;
}
