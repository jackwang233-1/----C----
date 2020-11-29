#include <stdio.h>

int main()
{
    printf("input a sentence:");

    char *ch[1024] = {0};
    char **p1[1024] = {0};
    int i = 0;



    while (scanf("%s", ch[i]))
    {
        p1[i] = &ch[i];
        i++;
    }
    for (int j = 0; j < i; j++)
    {
    printf("%s", *p1[j]);



    }


    return 0;
}
