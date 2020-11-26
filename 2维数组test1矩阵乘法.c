#include <stdio.h>

#define ROW 2
#define COL 3

int main()
{
    int A[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6}},
        B[COL][ROW] = {
            {1, 4},
            {2, 5},
            {3, 6}};
    int C[2][2] = {0};
            
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    for (int m = 0; m < COL; m++)
                    {
                        
                       
                            C[i][j] += A[i][m] * B[m][j];
                        
                    }
                }
            }
            
            printf("%3d %3d\n%3d %3d", C[0][0], C[0][1], C[1][0], C[1][1]);
            
                    
                    
                    
                    
                    
                    
                    
//                     printf("|%2d%2d%2d |   |%2d%2d
        
    
    return 0;
            

}
