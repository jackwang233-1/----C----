#include <stdio.h>

int main()
{

    int i;

    printf("How old are you:");
    scanf("%d", &i);

    if (i >= 18)

            {
                printf("Turn left!\n");

            // 大括号很重要，否则就只显示一个printf("Turn left!\n");
            }
    else if (i >= 17)   // else if 要有空格
            {
                printf("too young\n");

            }
    else
            {
                printf("Turn right! Go back home\n");
            }



    return 0;
}
