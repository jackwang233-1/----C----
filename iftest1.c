#include <stdio.h>

int main()
{
    char temp;

    scanf("%c", &temp);

    if ((int)temp >= 65 && (int)temp <= 90)     // 这样转换有用
    {
     printf("%c\n", (int)temp + 32);

    }
    else if ((int)temp >= 97 && (int)temp <= 122)
    {
        printf("%c\n", (int)temp - 32);
    }
    else
    {
        printf("%c", temp);
    }


    return 0;
}
