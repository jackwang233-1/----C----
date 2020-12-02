#include <stdio.h>

int v, center;

void first_row(int m[v][v], int);
// void columes(int m[v][v], int);
void columes_center(int m[v][v], int);
void columes_left(int m[v][v], int);
void columes_right(int m[v][v], int);

void first_row(int m[v][v], int v)
{
        int right = center, left = center - 1;
        m[0][left] = v * v - 1;
        for (int i = 0; i <= (v / 2); i++)
        {
                m[0][right + i] = 1 + (v + 2)* i;
        }
        for (int i = 0; i < (v / 2); i++)
        {
                m[0][left - i] = v*v - 1 - (v + 2)* i;
        }
        
}

void columes(int m[v][v], int v)
{
        columes_center(m, v);
        columes_left(m, v);
        columes_right(m, v);
}

void columes_center(int m[v][v], int v)
{
        for (int j = 1; j < v; j++)
        {
                if (m[j - 1][center] + v + 1 <= v*v)
                {
                        m[j][center] = m[j - 1][center] + v + 1;
                }
                else
                {
                        m[j][center] = m[j - 1][center] + v + 1 - v*v;
                }
                
        }
        
}


void columes_left(int m[v][v], int v)
{
        for (int i = 0; i < center; i++)
        {
                for (int j = 1; j < v; j++)
                {
                        if (j == (i + 1)* 2)
                        {
                                m[j][center - 1 - i] = m[j - 1][center - 1 - i] + 1;
                        }
                        else if (m[j - 1][center - 1 - i] + v + 1 <= v*v)
                        {
                                m[j][center - 1 - i] = m[j - 1][center - 1 - i] + v + 1;
                        }
                        else if (m[j - 1][center - 1 - i] + v + 1 > v*v)
                        {
                                m[j][center - 1 - i] = m[j - 1][center - 1 - i] + v + 1 - v*v;
                        }
                        
                        
                }
        }
                        
                        
}


void columes_right(int m[v][v], int v)
{

        for (int i = 0; i < center; i++)
        {
                for (int j = 1; j < v; j++)
                {
                        if (j == center * 2 - 1 - 2 * i)
                        {
                                m[j][center + 1 + i] = m[j - 1][center + 1 + i] + 1;
                        }
                        else if (m[j - 1][center + 1 + i] + v + 1 <= v*v)
                        {
                                m[j][center + 1 + i] = m[j - 1][center + 1 + i] + v + 1;
                        }
                        else if (m[j - 1][center + 1 + i] + v + 1 > v*v)
                        {
                                m[j][center + 1 + i] = m[j - 1][center + 1 + i] + v + 1 - v*v;
                        }
                        
                        
                }
        }
}


int main()
{
        printf("Plz input a integer:");
        scanf("%d", &v);
        getchar();

        center = v / 2;

        int matrix[v][v];

        first_row(matrix, v);
        // columes_center(matrix, v);
        // columes_left(matrix, v);
        // columes_right(matrix, v);

        columes(matrix, v);

        for (int i = 0; i < v; i++)
        {
                for (int j = 0; j < v; j++)
                {
                        printf("%4d", matrix[i][j]);
                }
                printf("\n");
        }


        return 0;
}