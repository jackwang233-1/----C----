#include <stdio.h>
#include <string.h>



int main()
{

    char SLO[5][100], Min[100], Max[100];
    int j = -1, count[5] = {0}, min = 100, max = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Plz input di %dth sentence:", i);
        while (j++, (SLO[i][j] = getchar()) != '\n')
        {

//         printf("\n%d\n", j);
            ;
        }
        SLO[i][j] = '\0';
        count[i] = j;
        j = -1;
    }
    printf("you had input 5 sentence:\n%s\n%s\n%s\n%s\n%s\n", SLO[0], SLO[1], SLO[2], SLO[3], SLO[4]);

    for (int k = 0; k < 5; k++)
    {
        if (min > count[k])
        {
            min = count[k];
            strcpy(Min, SLO[k]);
        }
        if (max < count[k])
        {
            max = count[k];
            strcpy(Max, SLO[k]);
        }
    }
    printf("MAX is:%s\nMIN is: %s", Max, Min);



    return 0;


}
