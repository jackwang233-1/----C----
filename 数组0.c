#include <stdio.h>

#define NUM 10


int main()
{
        int s[NUM];
        int i, sum = 0;

        for (i = 0; i < NUM; i++)
        {
            printf("plz input the %dth student's score:", i + 1);
            scanf("%d", &s[i]);
            sum += s[i];
        }

        printf("Input over. the average score is :%.2f\n", (double)sum / NUM);

        return 0;
}
