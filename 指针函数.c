#include <stdio.h>

char *getWord(char);

char *getWord(char c)
{
        switch(c)
        {
                // char str1[] = "Apple"
                // char str1[] = "Apple"
                // char str1[] = "Apple"
                // char str1[] = "Apple"



                case 'A': return "Apple";
                case 'B': return "Banana";
                case 'C': return "Cat";
                case 'D': return "Dog";
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