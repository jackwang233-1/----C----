#include <stdio.h>
#include <stdlib.h>

void shuf(int *);
// char *rena(int *, char *);
// void deli(char *);

void shuf(int *p)
{
        int temp1, temp2;
        int flag;
        *p = rand() % 54;
        for (int i = 1; i < 54; i++)
        {
                flag = 1;
                while (flag)
                {
                            temp1 = rand() % 54;
                            temp2 = i;
                            while (temp2-- > 0)
                            {


                                    if (temp1 == *(p + temp2))
                                    {
                                            flag = 1;
                                            break;
                                    }

                                    flag = 0;
                            }
                }
                *(p + i) = temp1;
        }
}






int main()
{
        int p[54];
        char poker[54][4];
//         int *p = &shuffled[0];
        char (*str)[4] = &poker[0];

        shuf(p);

        for (int i = 0; i < 54; i++)
        {
                printf("%d\n", *(p + i));
        }

        // rena(p, str);
        // deli(str);



        return 0;
}
