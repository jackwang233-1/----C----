#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
        int i, num;
        int count = 0;
        int *ptr = NULL; // attention,  initialize this to NULL is nessary.

        do
        {
                printf("Input a integer plz(-1 means finish):");
                scanf("%d", &num);
                count++;

                ptr = (int *)realloc(ptr, count * sizeof(int));
                if (ptr == NULL)
                {
                        exit(1);
                }

                ptr[count - 1] = num;

        } while (num != -1);

        printf("The integer(s) you input is(are):");
        for (i = 0; i < count -1; i++)
        {
                printf("%d ",ptr[i]);
        }

        putchar('\n');


        return 0;
}
