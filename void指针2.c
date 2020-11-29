#include <stdio.h>

int main()
{
        int num = 520;
        int *p1 = &num;
        void *p;

        p = p1;
        printf("p: %p, p1: %p\n", p, p1);
        
        printf("%d\n",  *(int *)p);     // without (int *) will be error.

        return 0;
}
