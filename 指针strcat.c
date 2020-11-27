#include <stdio.h>

#define MAX 1024

int main()
{
    printf("Input the 1st string:");

    char strA[MAX], strB[MAX], strC[MAX];
    char *str1 = strA, *str2 = strB, *str3 = strC;

    fgets(strA, MAX, stdin);
    printf("Input the 2nd string:");
    fgets(strB, MAX, stdin);

//     printf("str1:%sstr2:%s", strA, strB);
    while (*str1 != '\n')
    {
        *str3++ = *str1++;
    }
    while (*str2 != '\n')
    {
        *str3++ = *str2++;
    }
    *str3 = '\0';
    printf("after strcat the string is :%s", strC);





    return 0;
}
