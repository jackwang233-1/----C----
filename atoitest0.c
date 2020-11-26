#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", atoi("FishC123"));
    printf("%d\n", atoi("123FishC"));
    printf("%d\n", atoi("  123  "));
    printf("%d\n", atoi("-123.45 "));
    printf("%d\n", atoi("12345678999999999"));  // 超出了一个整形的存放范围
    
    return 0;
}
