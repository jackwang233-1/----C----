#include <stdio.h>
#define MAX 1024
int main()
{
        char str1[MAX];
        char c;
        int i = 0;

        while (( str1[i++] = getchar() ) != '\n')
        {

            if (str1[i-1] == ' ' || i >= 20)
            {
                str1[i] = '\0';
                printf("str you input is:%s", str1);
                break;
            }
        }
        if (i < 20)
        {
            str1[i] = '\0';
            printf("str you input is:%s", str1);
        }

        return 0;













        return 0;
}
