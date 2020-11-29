#include <stdio.h>

int main()
{
        int m, p, n;
        int i, j, k, row;

        // �����һ������
        printf("�������һ������ĳߴ�(M * P)��");
        scanf("%d * %d", &m, &p);
        int matrix_in_1[m][p];

        // ����ڶ�������
        printf("�������һ������ĳߴ�(P * N)��");
        scanf("%d * %d", &p, &n);
        int matrix_in_2[p][n];

        // ��ʼ����ų˻��Ķ�ά����
        // VAL���鲻֧��ֱ�ӳ�ʼ������
        int matrix_out[m][n];
        for (i = 0; i < m; i++)
        {
                for (j = 0; j < n; j++)
                {
                        matrix_out[i][j] = 0;
                }
        }

        // ���û������һ������
        printf("�������һ�������ֵ��\n");
        for (i = 0; i < m; i++)
        {
                for (j = 0; j < p; j++)
                {
                        scanf("%d", &matrix_in_1[i][j]);
                }
        }

        // ���û�����ڶ�������
        printf("������ڶ��������ֵ��\n");
        for (i = 0; i < p; i++)
        {
                for (j = 0; j < n; j++)
                {
                        scanf("%d", &matrix_in_2[i][j]);
                }
        }

        // ����˻�������
        for (i = 0; i < m; i++)
        {
                for (j = 0; j < n; j++)
                {
                        for (k = 0; k < p; k++)
                        {
                                matrix_out[i][j] += matrix_in_1[i][k] * matrix_in_2[k][j];
                        }
                }
        }

        printf("���������£�\n");

        // row ȡ�������ֵ
        row = m > p ? m : p;

        for (i = 0; i < row; i++)
        {
                printf("|  ");
                // ��ӡ matrix_in_1
                for (j = 0; j < p; j++)
                {
                        if (i < m)
                        {
                                printf("\b%d ", matrix_in_1[i][j]);
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b     ");
                        }
                }
                // ��ӡ * ��
                if (i == row / 2)
                {
                        printf(" * ");
                }
                else
                {
                        printf("   ");
                }
                printf("|  ");
                // ��ӡ matrix_in_2
                for (j = 0; j < n; j++)
                {
                        if (i < p)
                        {
                                printf("\b%d ", matrix_in_2[i][j]);
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b     ");
                        }
                }
                // ��ӡ = ��
                if (i == row / 2)
                {
                        printf(" = ");
                }
                else
                {
                        printf("   ");
                }
                // ��ӡ matrix_out
                printf("|  ");
                for (j = 0; j < n; j++)
                {
                        if (i < m)
                        {
                                printf("\b%d ", matrix_out[i][j]);
                                printf("|");
                        }
                        else
                        {
                                printf("\b\b\b      ");
                        }
                }
                printf("\n");
        }

        return 0;
}
