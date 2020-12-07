#include <stdio.h>

int seq(int, int *, int *);

int seq(int count, int *a, int *b)
{
        int c = *a + *b;
        if (count > 0)
        {
                printf("%d ", *a + *b);
                seq(--count, b, &c);
        }

        if(count == 0)
        ;



}


int main()
{
        int i = 1, j = 1;
        int count;

        printf("Input a integer plz:");
        scanf("%d", &count);
        getchar();
        printf("The before 15 nums are: 1 1 " );

        seq(count - 2, &i, &j);
        printf("\n");







        return 0;
}