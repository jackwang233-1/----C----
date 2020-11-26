#include <stdio.h>

int main()
{

    printf("input the string to be exchanged:");

    char i;
    int count = 0;

    while (( i =getchar()) != '\n' )
    {
        if (count != 0 && (i < 48 || i > 57))
        {

            break;
        }
        if ((int)i >= 48 && (int)i <= 57)
      {

            putchar(i);
            count += 1;

      }
    }


    return 0;
}
