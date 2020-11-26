#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch = 'a';
    int count = 0;
    int i = 0;

    printf("Input a string pls:");
    {

        do
        {
            ch = getchar();
            if (ch != '\n')
            {
                *(str + i) = ch;
                i += 1;
            }
            else
            {
                break;
            }



        }while (1);

        *(str + i) = '\0';

        printf("There is %d characters you inputed.", i);
        printf("%s", str);


    return 0;


    }
}
