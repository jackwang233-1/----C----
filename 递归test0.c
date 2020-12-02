#include <stdio.h>
#include <string.h>

#define MAX 1024

void inv(char *, int );



void inv(char str[MAX], int num)
{
        
               
        printf("%c", str[--num]);
        if (num > 0)
        {
                inv(str, num);
        }
        
        

}

int main()
{
        char str[MAX];
        int longth;
        printf("Input a string:");
        scanf("%s", str);

        getchar();
        
        longth = strlen(str);
        inv(str, longth);
        return 0;
}
