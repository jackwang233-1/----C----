#include <stdio.h>

int main()
{
    float str[][12] = {
        {0, 0, 0, 0, 0, 0, 31.3, 35.5, 58.7, 49.6, 55.5},
        {59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5},
        {34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0, 0, 0, 0}};
    float (*p)[12] = str;

    float max = 0, min= 1000 ;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if ( *(*(p + i) + j) != 0)
            {
                max = max > *(*(p + i) + j) ? max : *(*(p + i) + j);
                min = min < *(*(p + i) + j) ? min : *(*(p + i) + j);
            }
        }
    }
    printf("Max is :%.1f, Min is :%.1f\n", max, min); 
    
    float pm, temp, count;
     
    
    float *q = &str[0][0];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if ( (temp = *q++) != 0)
            {
                pm = temp;
                printf("%d, %2d : %.1f", i + 2014, j + 1, pm);
                count = (pm - min) / (max - min) * 20;
                for (int k = 0; k < count + 1; k++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
    }
    
    
    

    return 0;
}

