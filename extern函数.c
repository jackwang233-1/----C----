#include <stdio.h>

void func();


void func()
{
        int b;
        extern a;

        a = 880;
        b = 120;

        printf("In func, a = %d, b = %d\n", a, b);
}

int a, b = 520;

int main()
{
        
        printf("In func, a = %d, b = %d\n", a, b);
        func();
        printf("In func, a = %d, b = %d\n", a, b);
        return 0;
}