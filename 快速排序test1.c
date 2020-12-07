#include <stdio.h>

#define X 8
#define Y 8

int chess[X][Y];

// �ҵ���һ�����ߵ�λ��
int next(int *px, int *py, int count)
{
        int x = *px;
        int y = *py;

        switch(count)
        {
        case 0:
                if (x+2<=X-1 && y-1>=0 && chess[x+2][y-1] == 0)
                {
                        *px = x + 2;
                        *py = y - 1;
                        return 1;
                }
                break;
        case 1:
                if (x+2<=X-1 && y+1<=Y-1 && chess[x+2][y+1] == 0)
                {
                        *px = x + 2;
                        *py = y + 1;
                        return 1;
                }
                break;
        case 2:
                if (x+1<=X-1 && y-2>=0 && chess[x+1][y-2] == 0)
                {
                        *px = x + 1;
                        *py = y - 2;
                        return 1;
                }
                break;
        case 3:
                if (x+1<=X-1 && y+2<=Y-1 && chess[x+1][y+2] == 0)
                {
                        *px = x + 1;
                        *py = y + 2;
                        return 1;
                }
                break;
        case 4:
                if (x-2>=0 && y-1>=0 && chess[x-2][y-1] == 0)
                {
                        *px = x - 2;
                        *py = y - 1;
                        return 1;
                }
                break;
        case 5:
                if (x-2>=0 && y+1<=Y-1 && chess[x-2][y+1] == 0)
                {
                        *px = x - 2;
                        *py = y + 1;
                        return 1;
                }
                break;
        case 6:
                if (x-1>=0 && y-2>=0 && chess[x-1][y-2] == 0)
                {
                        *px = x - 1;
                        *py = y - 2;
                        return 1;
                }
                break;
        case 7:
                if (x-1>=0 && y+2<=Y-1 && chess[x-1][y+2] == 0)
                {
                        *px = x - 1;
                        *py = y + 2;
                        return 1;
                }
                break;
        }

        return 0;
}

int setHorse(int x, int y, int tag)
{
        int x1 = x, y1 = y, flag = 0, count = 0;

        // tag��¼�켣
        chess[x][y] = tag;
        // ���tag����64�˳�����
        if (tag == X*Y)
        {
                return 1;
        }

        // ��������ߣ���ôflagΪ1
        flag = next(&x1, &y1, count);
        // ����������·��
        while (flag == 0 && count < 7)
        {
                count += 1;
                flag = next(&x1, &y1, count);
        }

        // �ݹ������һ������
        while (flag)
        {
                // ����1��ʾ�ɹ��ҵ���ŵ�
                if (setHorse(x1, y1, tag+1))
                {
                        return 1;
                }
                // �������һ�����³���
                x1 = x;
                y1 = y;
                count += 1;
                flag = next(&x1, &y1, count);
                while (flag == 0 && count < 7)
                {
                        count += 1;
                        flag = next(&x1, &y1, count);
                }
        }

        if (flag == 0)
        {
                chess[x][y] = 0;
        }

        return 0;
}

int main(void)
{
        int i, j;

        for (i = 0; i < X; i++)
        {
                for (j = 0; j < Y; j++)
                {
                        chess[i][j] = 0;
                }
        }

        // �������� (2, 0) ���꿪ʼ�����ǱȽ����׳������
        // �����Ƚ������ģ��� CPU �ر�ǿ�������Գ��Լ�����������
        if (setHorse(2, 0, 1))
        {
                for (i = 0; i < X; i++)
                {
                        for (j = 0; j < Y; j++)
                        {
                                printf("%02d  ", chess[i][j]);
                        }
                        putchar('\n');
                }
        }
        else
        {
                printf("��ϧ�޽⣡\n");
        }

        return 0;
}
