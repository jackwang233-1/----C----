#include <stdio.h>

int main()
{
    int a[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};
        
    int i, j;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j != 0 && (i * 5 + j + 1) % 4 == 1)
            {
                printf("\n%2d ", a[i][j]);
            }
            else
            {
                
                printf("%2d ", a[i][j]);
            
            }
            
            
        }
    }
    
    return 0;
            

}
