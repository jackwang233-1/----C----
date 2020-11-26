#include <stdio.h>

int main()
{
    char c;
    int i;
    int j;

    printf("Please input a character, number, hexadecimal number: ");
    scanf("%c%d%x", &c, &i, &j);    // ∂¡»° ‰»ÎA250ff
    printf("The value of the variable c is : %c\n", c);
    printf("The value of the variable i is : %d\n", i);
    printf("The value of the variable j is : %#X(%d)\n", j, j);

    return 0;
}


