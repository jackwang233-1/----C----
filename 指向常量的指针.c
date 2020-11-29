#include <stdio.h>

int main(void)
{
    int num = 520;
    const int cnum = 880;
    const int *pc = &cnum;
    
    printf("cnum: %d, &cnum: %p\n", cnum, &cnum);
    printf("*pc: %d, pc: %p\n", *pc, pc);
    
//     *pc = 1012;      // error
    
    pc = &num;
    
    printf("num: %d, &num: %p\n", num, &num);
    printf("*pc: %d, pc: %p\n", *pc, pc);
    
//      *pc = 1012;     // error
    num = 1024;
        
    printf("num: %d, &num: %p\n", num, &num);
    printf("*pc: %d, pc: %p\n", *pc, pc);
    
    return 0;
}
