#include <stdio.h>

void func(int );
int global;
void func(int k)
{
        static int count = 0;

        printf("count:%p\n", &count);
        printf("k:%p\n", &k);
        // printf("count = %d\n", count);

        count++;
}

int main(void)
{
        int i;
        const int j;

        // for (i = 0; i < 10; i++)
        // {
                func(i);
        // }

        printf("func:%p\n", &func);
        printf("main:%p\n", &main);
        printf("global:%p\n", &global);
        printf("i:%p\n", &i);
        printf("j:%p\n", &j);

        return 0;
}