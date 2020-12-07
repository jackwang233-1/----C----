#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Plz input the numbers of integer you want to input:");
    int num;
    scanf("%d", &num);

    int integer[num];
    int *ptr;
    int temp;

    ptr = (int *)malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++)
    {
        switch (i + 1)
        {
        case 1: printf("Plz input the 1st integer:");break;

        case 2: printf("Plz input the 2nd integer:");break;

        case 3: printf("Plz input the 3rd integer:");break;

        default: printf("Plz input the %dth integer:", i + 1);
        }
        scanf("%d", &temp);
        *(ptr + i) = temp;
    }
    printf("The integers you have input are:");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    free(ptr);
    ptr = NULL;

    return 0;


}
