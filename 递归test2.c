#include <stdio.h>
#include <math.h>

int getlongth(int);

int getlongth(int i)
{
        int temp = 1;
        int longth1 = 0;
        if (0 == i)
        {
                return 1;
        }
        else
        {
                while (temp <= i)
                {
                        temp *= 2;
                        longth1++;


                }
                return longth1;
        }
}


int main()
{
        printf("Plz input a integer:");
        int num, longth;


        scanf("%d", &num);
        while(getchar() != '\n')
             continue;

        longth = getlongth(num);
//        printf("longth = %d\n", longth);
        int binary[longth];
        int temp1 = longth;
        for (int i = 0; longth-- > 0; i++)
        {

                binary[i] = num / (int)pow(2, longth);
                num %= (int)pow(2, longth);
        }
        for (int i = 0; i < temp1; i++)
        {
                printf("%d", binary[i]);
        }


        return 0;
}
