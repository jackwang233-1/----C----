#include <stdio.h>

int main()
{
        long a = 1, b = 1, c, i;

        for (i = 3; i <= 24; i++)
        {
                c = a + b;
                a = b;
                b = c;
        }

        printf("������ܹ���%ld�����ӣ�\n", c);

        return 0;
}
