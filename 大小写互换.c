#include <stdio.h>

int main()
{
//     int ch = 'A';
//     int count = 3;
//
//     while (count)
//     {
//         ch += count;
//         count -= 1;
//         putchar(ch);
//     }
//
//     putchar('\n');

	char i;

    printf("Input a line of english sentence:");
    while (( i = getchar())!= '\n')
    {
        if ((int)i >= 65 && (int)i <= 90)
        {
        putchar((int)i + 32  ); continue;
//        return;
//        return;
        }
        if ((int)i >= 97 && (int)i <= 122)
        {
            putchar((int)i - 32);continue;

        }
        else
        {
            putchar(i);continue;
        }
    }



       return 0;
}




