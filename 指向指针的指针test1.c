#include <stdio.h>

int main(void)
{
    printf("input a sentence:");
    char temp[1024];
    char *p1 = temp;
    int i = 0;

    for (;(temp[i++] = getchar()) != '\n';)
    ;
    *(p1+i-1) = '\0';

    printf("input the character you want to be spiter:");

    char sp;
    int k = 0,  colume = 0, row = 0;


    scanf("%c", &sp);

    for (int j = 0; ; j++)
    {
        if (temp[j] != sp && temp[j] != '\0')
        {
            k++;
        }
        else if (temp[j] == sp)
        {
            colume = colume > k ? colume : k;

            if(temp[j+1] == '\0')
            {

                break;
            }
            else if(temp[j+1] == sp)
            {
                k = 0;
            }
            else
            {
                row++;
                k = 0;

            }
        }
        else if (temp[j] == '\0')
        {
            colume = colume > k ? colume : k;
            break;
        }
    }
    printf("there is a [%d]*[%d] matrix for you.", ++row, ++colume);




    return 0;
}
