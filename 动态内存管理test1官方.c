#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        void *block;
        int i, count;
        size_t maximum = 0;
        size_t blocksize[] = {1024 * 1024, 1024, 1};

        // ����Ӵ�С���γ���
        // �ȳ�����1024 * 1024Ϊ��������ȥ�����ڴ�ռ�
        // ��malloc����NULLʱ���������������СΪ1024��������
        // ���վ�ȷ��1���ֽڵ���������maximum�ĳߴ�
        for (i = 0; i < 3; i++)
        {
                for (count = 1; ;count++)
                {
                        block = malloc(maximum + blocksize[i] * count);
                        if (block)
                        {
                                maximum += blocksize[i] * count;
                                free(block);
                        }
                        else
                        {
                                break;
                        }
                }
        }

        printf("malloc�ڵ�ǰ���������뵽�����ռ��ǣ�%.2fGB\n", maximum * 1.0 / 1024 / 1024 / 1024);

        return 0;
}
