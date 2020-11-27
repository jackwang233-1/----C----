#include <stdio.h>

#define MAX 1024

int main()
{
            char strA[MAX], strB[MAX];
            char *str1 = strA, *str2 = strB;

            printf("input a string to str1:");

            fgets(strA, MAX, stdin);

            printf("input the number of character that you want to copy:");

            int i;
            scanf("%d", &i);

            printf("copying\n");

            float count = 0;

            while (count < i)
            {
                if (*str1 == '\0' )
                {
                    *str2++ = *str1++;
                    break;
                }
                else
                {
                    if (*str1 < 0)
                    {
                        *str2++ = *str1++;
                        *str2++ = *str1++;
                        count += 1;
                    }
                    else
                    {
                        *str2++ = *str1++;
                        count += 1;
                    }
                }
            }

            printf("Now str2 is %s", strB);

            return 0;
}
