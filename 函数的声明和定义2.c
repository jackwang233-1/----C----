#include <stdio.h>

int max(int, int);

int max(int x, int y)
{
    int max_num;
    
    max_num = x > y ? x : y;
    
    return max_num;
}

int main(void)
{
    int a, b, c;
    
    printf("input two integers:");
    scanf("%d%d", &a, &b);
    
    c = max(a, b);
    printf("%d is bigger.\n", c);
    
    return 0;
}

