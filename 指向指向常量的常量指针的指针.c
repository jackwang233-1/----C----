#include <stdio.h>

int main(void)
{
    int num = 520;
    const int cnum = 880;
    const int * const p = &cnum;
    
    const int * const *pp = &p;
    
    printf("pp: %p, &p: %p\n", pp, &p);
    printf("*pp: %p, p: %p, &cnum: %p\n", *pp, p, &cnum);
    printf("**pp: %d, *p: %d, cnum: %d\n", **pp, *p, cnum);
    
    
    
    return 0;
}
