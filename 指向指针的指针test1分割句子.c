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
            temp[j] = '\n';
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
    printf("there is a [%d]*[%d] matrix for you.\n", ++row, ++colume);

    char result[row][colume] ;
    char (*p2)[colume];
    char (*pp2)[row][colume];

    p2 = &result[0];

    pp2 = &result;

    int temp1 = 0;
    for (int m = 0; m < row; m++)
    {
        for(int n = 0; n < colume; n++)
        {

            if (temp[temp1] != '\n' && temp[temp1] != '\0')
            {
                *(*(p2 + m) + n) = temp[temp1] ;

                temp1++;
            }
            else if (temp[temp1] == '\n')
            {
                *(*(p2 + m) + n) = '\0';
                printf("%s\n", *(p2 + m));
                temp1++;
                break;

            }
            else if (temp[temp1] == '\0')
            {

                printf("%s", *(p2 + m));
                goto A;
            }

        }
        
    }


A:    return 0;
}
