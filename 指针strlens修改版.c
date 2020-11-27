#include <stdio.h>

int main()
{
    char str[100];
    char *str1 = str;
    int ch ;
    float count = 0;

    printf("Input a string pls:");


        do
        {
            ch = getchar();
            if (ch != '\n' && (ch >= 32 && ch <= 126  ))
            {

                *str1++ = ch;
                count += 1;
            }
            else if (ch == '\n')
            {
                break;
            }
            else
            {
                *str1++ = ch;
                count += 0.5;
            }



        }while (1);

         *str1++ = '\0';

        printf("There is %.0f characters you inputed.\n", count);
        printf("%s", str);


    return 0;



}
