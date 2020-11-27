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

    int count = 1;
    int n;

    printf("Input the number that you want to compare:");
    scanf("%d", &n);


    while ( n-- )
    {
        if (*str1 == '\0' || *str2 == '\0')
        {
            break;
        }
        if (*str1 < 0 && *str1 == *str2)
        {
            str1 += 2;
            str2 += 2;
            count += 1;
        }
        else if ( *str1 >= 0 && *str1 == *str2 )
        {

            str1 += 1;
            str2 += 1;

            count += 1;
        }
        else
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
        printf("the %dth character is different", count );
    }




    return 0;
}
