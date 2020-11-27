#include <stdio.h>

#define MAX 1024

int main()
{
        char str[MAX], *str1 = str;

        printf("Input a string plz:");
//        fgets(&str[0], MAX, stdin);

        fgets(str, MAX, stdin);

        printf("you have inputed :%s", str);


    return 0;
}
