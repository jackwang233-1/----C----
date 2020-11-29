#include <stdio.h>

int main()
{
        int num = 520;
        void *p;

        p = &num;
        printf("p: %p, num: %p\n", p, &num);
        
        printf("%d\n",  *(int *)p);     // without (int *) will be error.

        return 0;
}
