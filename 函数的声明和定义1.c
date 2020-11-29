#include <stdio.h>

int sum(int c);

int sum(int c)
{
    int result = 0;

    do
    {
        result += c;
    }while(c-- );

    return result;
}

int main(void)
{
    int n;
    int result;

    printf("input the value of n:");
    scanf("%d", &n);

    result = sum(n);

    printf("1+2+3+...+%d+%d=:%d\n", n-1, n, sum(n));


    return 0;
}

