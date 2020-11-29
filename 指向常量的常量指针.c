#include <stdio.h>

int main(void)
{
    int num = 520;
    const int cnum = 880;
    const int * const p = &cnum;
    
    const int * const p2 = &num;
    
//     *p = 1024;           // error
//     printf("p: %d\n", *p);
    
//     p = &cnum;                   // error
//     printf("*p: %d\n", *p);
    
    printf("*p2: %d\n", *p2);
    num = 1024;
    printf("*p2: %d\n", *p2);
    
    
    
    return 0;
}
