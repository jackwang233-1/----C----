#include <stdio.h>

#define MAX 1024

int main()
{
    printf("Input the 1st string:");

    char strA[MAX], strB[MAX];
    char *str1 = strA, *str2 = strB;


    fgets(strA, MAX, stdin);

    printf("Input the 2nd string:");

    fgets(strB, MAX, stdin);

    int count = 0;

    while ( *str1++ == *str2++ )
    {
        count += 1;
        if ( *str1 == '\0'  || *str2 == '\0')
        {
            break;
        }
    }


    if (*str1 == *str2)
    {
        printf("They are same.");
    }
    else
    {
        printf("the %dth character is different", count + 1);
    }




    return 0;
}
