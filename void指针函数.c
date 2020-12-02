#include <stdio.h>

void *func(int n, int *ptr, char *str);

void *func(int n, int *ptr, char *str)
{
        if (n > 0)
        {
                return ptr;
        }
        else
        {
                return str;
        }
}

int main(void)
{
        int num = 520;
        char *str = "FishC";

        printf("%d\n", * (int *) (func(1, &num, str)));
        printf("%s\n", (char *) func(-1, &num, str));

        return 0;
}