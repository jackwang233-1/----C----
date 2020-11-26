#include <stdio.h>

int main()
{
    char str[100];
    int ch ;
    float count = 0;
    int i = 0;

    printf("Input a string pls:");


        do
        {
            ch = getchar();
            if (ch != '\n' && (ch >= ' ' && ch <= '~'  ))
            {

                *(str + i) = ch;
                i += 1;
                count += 1;
            }
            else if (ch == '\n')
            {
                break;
            }
            else
            {
                *(str + i) = ch;
                i += 1;
                count += 0.5;
            }



        }while (1);

        *(str + i) = '\0';

        printf("There is %d characters you inputed.", (int)count);
        printf("%s", str);


    return 0;



}
