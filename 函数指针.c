#include <stdio.h>
int square(int);

int square(int num)
{
        return num * num;
}

int main(void)
{
        int num;
        int (*fp)(int);

        printf("Input a integer:");
        scanf("%d", &num);

        fp = square;

        printf("%d * %d = %d\n", num, num, (*fp)(num));

        return 0;
}