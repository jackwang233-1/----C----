#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int num = 123;

    ptr = malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocate failed!\n");
        exit(1);

    }

    printf("Plz input a integer:");
    scanf("%d", ptr);

    printf("The integer you input is :%d\n", *ptr);
    ptr = &num;


    printf("After free, the integer you input is :%d\n", *ptr);

    free(ptr);
    return 0;

}
