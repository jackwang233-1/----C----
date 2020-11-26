#include <stdio.h>

int main()
{
    char ch;

    printf("input ur grade:");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'A': printf("ur grade is above 90!\n"); break;    // break ºÜÖØÒª
        case 'B': printf("ur grade is 80~89!\n"); break;
        case 'C': printf("ur grade is 70~79!\n"); break;
        case 'D': printf("ur grade is 60~69!\n"); break;
        case 'E': printf("ur grade is 0~59!\n"); break;
        default: printf("input error!\n"); break;
    }

    return 0;
}




