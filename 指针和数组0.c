#include <stdio.h>

int main()
{
    int a;
    int *p = &a;

    printf("input a integer:");
    scanf("%d", &a);    // ��&�����治��*��
    printf("a = %d\n", a);

    printf("input a integer:");
    scanf("%d", p);
    printf("a = %d\n", a);



    return 0;

}
