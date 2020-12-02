#include <stdio.h>

char *getWord(char);

char *getWord(char c)
{
        switch(c)
        {
                char str1[] = "Apple";
                char str2[] = "Banana";
                char str3[] = "Cat";
                char str4[] = "Dog";



                case 'A': return str1;
                case 'B': return str2;
                case 'C': return str3;
                case 'D': return str4;
                default: return "None";
        }
}


int main(void)
{
        char input;

        printf("input a character plz:");
        scanf("%c", &input);
        printf("%s\n", getWord(input));


        return 0;
}