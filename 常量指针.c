#include <stdio.h>

int main(void)
{
    int num = 520;
    const int cnum = 880;
    int * const p = &num;
    
    *p = 1024;
    printf("p: %d\n", *p);
    
//     p = &cnum;                   // error
//     printf("*p: %d\n", *p);
    
    return 0;
}
