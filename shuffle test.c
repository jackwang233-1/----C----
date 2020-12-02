#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define fang 方
#define mei 梅
#define hong 紅
#define hei 黑
#define xiao 小王
#define da 大王
#define MAX 1024

void shuf(int *);
void rena(int *, char *);
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


void rena(int *p, char *str)
{
        char *f = "fang";
        char *m = "mei";
        char *h = "hong";
        char *b = "hei";
        int temp;
        for (int i = 0; i < 54; i++)
        {
                temp = *(p + i);
                if (temp >= 0 && temp <= 9)
                {
                        sprintf(str[i], "%s%c", f, '0'+ temp);
                        
                }
                if (temp >= 10 && temp <= 19)
                {
                        sprintf(str[i], "%s%c", m, '0'+ temp - 10);
                        
                }
                if (temp >= 20 && temp <= 29)
                {
                        sprintf(str[i], "%s%c", h, '0'+ temp - 20);
                        
                }
                if (temp >= 30 && temp <= 39)
                {
                        sprintf(str[i], "%s%c", b, '0'+ temp - 30);
                        
                }
                if (temp == 40)
                {
                        sprintf(str[i], "%s%c", f, 'J');
                        
                }
                if (temp == 41)
                {
                        sprintf(str[i], "%s%c", f, 'Q');
                        
                }
                if (temp == 42)
                {
                        sprintf(str[i], "%s%c", f, 'K');
                        
                }
                if (temp == 43)
                {
                        sprintf(str[i], "%s%c", m, 'J');
                        
                }
                if (temp == 44)
                {
                        sprintf(str[i], "%s%c", m, 'Q');
                        
                }
                if (temp == 45)
                {
                        sprintf(str[i], "%s%c", m, 'K');
                        
                }
                if (temp == 46)
                {
                        sprintf(str[i], "%s%c", h, 'J');
                        
                }
                if (temp == 47)
                {
                        sprintf(str[i], "%s%c", h, 'Q');
                        
                }
                if (temp == 48)
                {
                        sprintf(str[i], "%s%c", h, 'K');
                        
                }
                if (temp == 49)
                {
                        sprintf(str[i], "%s%c", b, 'J');
                        
                }
                if (temp == 50)
                {
                        sprintf(str[i], "%s%c", b, 'Q');
                        
                }
                if (temp == 51)
                {
                        sprintf(str[i], "%s%c", b, 'K');
                        
                }
                if (temp == 52)
                {
                        sprintf(str[i], "%s", "小王");
                        
                }
                if (temp == 53)
                {
                        sprintf(str[i], "%s", "大王");
                        
                }
                
        }
}




int main()
{
        int p[54];
        char str[54][MAX];

        shuf(p);

        for (int i = 0; i < 54; i++)
        {
                printf("%d\n", *(p + i));
        }

        rena(p, str);

        for (int i = 0; i < 54; i++)
        {
                printf("%s\n", &str[i]);
        // deli(str);



        return 0;
}
