#include <stdio.h>

int main()
{
    char isRain, isFree;

    printf("FREE?(Y/N)");
    scanf("%c", &isFree);

    getchar();  // ����ܻس�

    printf("RAIN?(Y/N)\n");
    scanf("%c", &isRain);

    if (isFree == 'Y')
    {
        if (isRain == 'Y')
        {
            printf("UMBRELLER\n");
        }
    }                           // ��������Ž����else�ͽ�ԭ������⣨����else��
    else
    {
        printf("NOT FREE! T_T\n");
    }



    return 0;
}




