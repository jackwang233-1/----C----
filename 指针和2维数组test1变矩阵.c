#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 1024

int main()
{

        char  str1[MAX], *str = str1;
        int  row;


        printf("input some character:");
        fgets(str1, MAX, stdin);


        row = (int)sqrt(strlen(str1));
        printf("%d\n", row );

        char matrix[row][row] ;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < row; j++)
            {
                matrix[i][j] = *str++;
            }
        }
        printf("the matrix is :\n");

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < row; j++)
            {
                printf("%c", matrix[i][j]);
            }
            printf("\n");
        }












        return 0;
}
