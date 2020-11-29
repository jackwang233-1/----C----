#include <stdio.h>
#include <string.h>

int main()
{

        char matrix[3][3] = {0}, str1[100], *str = str1;
        char ch;

        do
        {
            printf("input 9 character:");
            fgets(str1, 10, stdin);

        }while ( strlen(str1) < 9);


        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = *str++;
            }
        }
        printf("the matrix is :\n");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", matrix[i][j]);
            }
            printf("\n");
        }












        return 0;
}
