#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 102400


void queen(char a[MAX][8][8], int, int);

int Count = 0;


void queen(char a[MAX][8][8], int colume, int v)
{
        int i, j, k, l;
        _Bool flag;
        for (k = 0; k < 8; k++)
        {
                flag = 1;
                for (j = 0; j < colume; j++)
                {
                        for (l = 0; l < 8; l++)
                        {
                                if (k - l == colume - j)
                                {
                                        if (a[v][l][j] == 'O')
                                        {
                                                flag = 0;
                                        }
                                }
                                else if (l == k )
                                {
                                        if (a[v][l][j] == 'O')
                                        {
                                                flag = 0;
                                        }
                                }
                                else if (l- k == colume - j)
                                {
                                        if (a[v][l][j] == 'O')
                                        {
                                                flag = 0;
                                        }
                                }
                        }
                }
                if (flag == 1)
                {
                        if (colume < 7)
                        {
                                a[v][k][colume] = 'O';

                                int temp = v;
                                v = rand() % MAX;
                                for(int g = 0; g <= colume; g++)
                                {
                                        for (int o = 0; o < 8; o++)
                                        {
                                                a[v][o][g] = a[temp][o][g];
                                        }
                                }

                                queen(a, colume + 1,v);

                                v = temp;
                        }

                        else
                        {
                                a[v][k][colume] = 'O';
                                Count++;
                        }
                }

        }
}




int main()
{
        char a[MAX][8][8];
        srand(time(NULL));
        for (int i = 0; i < 8; i++)
        {
                for (int j = 0; j < 8; j++)
                {
                        a[0][i][j] = 'X';
                }

        }

        for (int i = 0; i < 8; i++)
        {
                a[i][i][0] = 'O';
                queen(a, 1, i);
        }

        printf("%d\n", Count);

        return 0;
}
