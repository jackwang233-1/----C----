#include <stdio.h>

int count = 0;

int check(int i, int j, int (*queen)[4]);
void setQueen(int i, int (*queen)[4]);

int check(int i, int j, int (*queen)[4])
{
        int s, t;

        // �ж���
        for (s = i, t = 0; t < 4; t++)
        {
                if (queen[s][t] == 1 && t != j)
                {
                        return 0;
                }
        }

        // �ж���
        for (t = j, s = 0; s < 4; s++)
        {
                if (queen[s][t] == 1 && s != i)
                {
                        return 0;
                }
        }

        // �ж����Ϸ�
        for (s = i-1, t = j-1; s >= 0 && t >= 0; s--, t--)
        {
                if (queen[s][t] == 1)
                {
                        return 0;
                }
        }

        // �ж����Ϸ�
        for (s = i+1, t = j+1; s < 4 && t < 4; s++, t++)
        {
                if (queen[s][t] == 1)
                {
                        return 0;
                }
        }

        // ����������ؿ����ܴ���ô˵����������,����1
        return 1;
}

void setQueen(int col, int (*queen)[4])
{
        int i, j, row;

        // ���лʺ�������
        if (col == 4)
        {
                for (i = 0; i < 4; i++)
                {
                        for (j = 0; j < 4; j++)
                        {
                                if (queen[i][j] != 0)
                                {
                                        printf("Q ");
                                }
                                else
                                {
                                        printf("* ");
                                }
                        }
                        putchar('\n');
                }

                putchar('\n');
                count++;

                return;
        }

        // ����ÿһ��
        for (row = 0; row < 4; row++)
        {
                // ���ÿһ���ж�Ӧ��ÿһ���ܷ���ûʺ�
                if (check(row, col, queen))
                {
                        // ���queen[row][col]��������������ûʺ�
                        queen[row][col] = 1;
                        // col+1��������һ��ݹ�
                        setQueen(col+1, queen);
                        // ֻ�����������ִ���������
                        // 1. col+1�������е�row��������
                        // 2. ���������ά����ķ���
                        // �������������
                        queen[row][col] = 0;
                }
        }
}

int main(void)
{
        int queen[4][4];
        int i, j;

        // ��ʼ����ά���飬1��ʾ�ѷ��ûʺ�0��ʾû��
        for (i = 0; i < 4; i++)
        {
                for (j = 0; j < 4; j++)
                {
                        queen[i][j] = 0;
                }
        }

        setQueen(0, queen);

        return 0;
}
