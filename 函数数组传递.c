#include <stdio.h>

int v;

void first_row(int m[v][v], int);
void columes(int *, int);

void first_row(int m[v][v], int v)
{
        int center = v / 2;
        m[0][center] = 1;
}




int main()
{


        scanf("%d", &v);



        int matrix[v][v];

        first_row(matrix, v);
//         columes(matrix, v);
        printf("%d", matrix[0][v / 2]);



        return 0;
}
