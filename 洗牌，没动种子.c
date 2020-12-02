#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 1024
#define cards 54 / 3

void shuf(int *);
void rena(int *, char str[54][MAX]);
void deli(char str[54][MAX], char p1[cards][MAX], char p2[cards][MAX], char p3[cards][MAX]);
void show(char p1[cards][MAX], char p2[cards][MAX], char p3[cards][MAX], char *, char *, char *);

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


void rena(int *p, char str[54][MAX])
{
        char *f = "方";
        char *m = "梅";
        char *h = "紅";
        char *b = "黑";
        int temp;
        for (int i = 0; i < 54; i++)
        {
                temp = *(p + i);
                if (temp >= 0 && temp <= 9)
                {
                        sprintf(str[i], "%s%d", f, 1 + temp);
                        
                }
                if (temp >= 10 && temp <= 19)
                {
                        sprintf(str[i], "%s%d", m, 1 + temp - 10);
                        
                }
                if (temp >= 20 && temp <= 29)
                {
                        sprintf(str[i], "%s%d", h, 1 + temp - 20);
                        
                }
                if (temp >= 30 && temp <= 39)
                {
                        sprintf(str[i], "%s%d", b, 1 + temp - 30);
                        
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



void deli(char str[54][MAX], char p1[cards][MAX], char p2[cards][MAX], char p3[cards][MAX])
{
        for (int i = 0; i < 54; i++)
        {
                switch (i % 3)
                {
                        case 0: strcpy(p1[i / 3], str[i]);break;
                        case 1: strcpy(p2[i / 3], str[i]);break;
                        case 2: strcpy(p3[i / 3], str[i]);break;
                }
        }
}


void show(char p1[cards][MAX], char p2[cards][MAX], char p3[cards][MAX], char *pa, char *pb, char *pc)
{
        printf("%s's cards is:", pa);
        for (int i = 0; i < cards; i++)
        {
                printf("%s ",p1[i]);
        }
        printf("\n");
        printf("%s's cards is:", pb);
        for (int i = 0; i < cards; i++)
        {
                printf("%s ",p2[i]);
        }
        printf("\n");
        printf("%s's cards is:", pc);
        for (int i = 0; i < cards; i++)
        {
                printf("%s ",p3[i]);
        }
        printf("\n");
}


int main()
{
        int p[54];
        char str[54][MAX];
        char player1[cards][MAX];
        char player2[cards][MAX];
        char player3[cards][MAX];
        char playerA[MAX], playerB[MAX], playerC[MAX];

        printf("Plz input the name of player1:");
        scanf("%s", playerA);
        getchar();
        printf("Plz input the name of player2:");
        scanf("%s", playerB);
        getchar();
        printf("Plz input the name of player3:");
        scanf("%s", playerC);
        getchar();


        shuf(p);

        // for (int i = 0; i < 54; i++)
        // {
        //         printf("%d\n", *(p + i));
        // }

        rena(p, str);

        // for (int i = 0; i < 54; i++)
        // {
        //         printf("%s\n", str[i]);
        // }

        deli(str, player1, player2, player3);

        // for (int i = 0; i < 54 / 3; i++)
        // {
        //         printf("%s, %s, %s\n", player1[i], player2[i], player3[i]);
        // }

        show(player1, player2, player3, playerA, playerB, playerC);


        return 0;
}
