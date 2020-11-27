#include <stdio.h>

int main()
{
        printf("input a string plz:");
        int ch;
        int count = 0;
        char stra[1028], strb[1028];
        char *str1 = stra, *str2 = strb;

        do
        {
            ch = getchar();

            if (ch != '\n' )
            {

                *str1++ = ch;
                count++;
            }
            else
            {
                *str1++ = '\0';
                break;
            }
        }while (1);

        printf("str1 is %s.\n", stra);
        printf("*str1 is %p.\n", *str1);
        printf("copying str1 to str2\n");

        str1 = (str1 - count - 1);

        printf("*str1 is %p.\n", *str1);

        for (int i = 0; i <= count + 1; i++)
        {
                *str2++ = *str1++;
        }
        printf("copy over, now str1 = %s, str2 = %s.", stra, strb);







    return 0;
}
