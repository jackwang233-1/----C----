#include <stdio.h>

int main()
{

    int i;

    printf("How old are you:");
    scanf("%d", &i);

    if (i >= 18)

            {
                printf("Turn left!\n");

            // �����ź���Ҫ�������ֻ��ʾһ��printf("Turn left!\n");
            }
    else if (i >= 17)   // else if Ҫ�пո�
            {
                printf("too young\n");

            }
    else
            {
                printf("Turn right! Go back home\n");
            }



    return 0;
}
