#include <stdio.h>

int main()
{
    char isRain, isFree;

    printf("FREE?(Y/N)");
    scanf("%c", &isFree);

    getchar();  // 会接受回车

    printf("RAIN?(Y/N)\n");
    scanf("%c", &isRain);

    if (isFree == 'Y')
    {
        if (isRain == 'Y')
        {
            printf("UMBRELLER\n");
        }
    }                           // 这个大括号解决了else就近原则的问题（悬挂else）
    else
    {
        printf("NOT FREE! T_T\n");
    }



    return 0;
}




