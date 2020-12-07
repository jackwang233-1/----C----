#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main(void)
{
        int *ptr1 = NULL;
        int *ptr2 = NULL;

        // First time memory alocate.
        ptr1 = (int *)malloc(10 * sizeof(int));

        // Sometime we found the memory space is too small to continue.

        // Second time memory allocate.
        ptr2 = (int *)malloc(20 * sizeof(int));

        // copy ptr1 data to ptr2.

        memcpy(ptr2, ptr1, 10);

        // over.
        free(ptr2);


        return 0;
}       