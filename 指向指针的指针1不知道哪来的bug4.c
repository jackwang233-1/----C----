#include <stdio.h>

int main()
{
        char *cBooks[6] = {NULL};
        char a[] =  "��Cר�ұ�̡�";
        char b[] = "��C��ָ�롷";

        cBooks[0] = a;
        cBooks[1] = b;
        cBooks[2] = a;
        cBooks[3] = b;
        cBooks[4] = a;
        cBooks[5] = b;


        char **byFishC = NULL;
        char **Favorite[4] = {NULL};

        byFishC = &cBooks[5];
        Favorite[0] = &cBooks[0];
        Favorite[1] = &cBooks[1];
        Favorite[2] = &cBooks[2];
        Favorite[3] = &cBooks[3];
        Favorite[4] = &cBooks[4];

        printf("fishc�У�%s\n", *byFishC);
        printf("favorite��:" );

        for (int i = 0; i < 5; i++)
        {
            printf("%s\n", *Favorite[i]);
        }


        return 0;
}
