#include <stdio.h>
#include <stdlib.h>

int main()
{
        int size;
        int *ptr;
        ptr = (int *)malloc(1024);
        do
        {
                free(ptr);
                ptr = malloc(size += 1024);
        }while(ptr != NULL);
        printf("The max size is :%d\n",size - 1024);
        free(ptr);
        ptr = NULL;

        return 0;


}
