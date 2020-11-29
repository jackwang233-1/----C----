#include <stdio.h>

void f(int);
void i(int);
void s(int);
void h(int);
void c(int);

int main()
{       
    printf("intput the number of space:");
    int space;
    scanf("%d", &space);
    int temp = space;
    for (int j = 0; j < 7; j++)
    {
        f(j);
        while(temp--)
        {
        printf(" ");
        }
        temp = space;
        i(j);
        while(temp--)
        {
        printf(" ");
        }
        temp = space;
        s(j);
        while(temp--)
        {
        printf(" ");
        }
        temp = space;
        h(j);
        while(temp--)
        {
        printf(" ");
        }
        temp = space;
        c(j);
        printf("\n");
    }

        return 0;
}



void f(int a)
{
    char f[7][9] = {
        "########",
        "##      ",
        "##      ",
        "######  ",
        "##      ",
        "##      ",
        "##      "};
    char (*f1)[9] = &f[0];
    
    printf("%s", *(f1 +a));
    

    
}
void i(int a)
{
    char i[7][5] = {
        "####",
        " ## ",
        " ## ",
        " ## ",
        " ## ",
        " ## ",
        "####"};
        
    char (*i1)[5] = &i[0];
    
    printf("%s", *(i1 +a));
    
    
}
void s(int a)
{
    char s[7][9] = {
        " ###### ",
        "##    ##",
        "##      ",
        " ###### ",
        "      ##",
        "##    ##",
        " ###### "};
    
    char (*s1)[9] = &s[0];
    
    printf("%s", *(s1 +a));
    
}

void h(int a)
{
    char h[7][9] = {
        "##    ##",
        "##    ##",
        "##    ##",
        "########",
        "##    ##",
        "##    ##",
        "##    ##"};
    
    char (*h1)[9] = &h[0];
    
    printf("%s", *(h1 +a));
    
}
void c(int a)

{
    char c[7][9] = {
        " ###### ",
        "##    ##",
        "##      ",
        "##      ",
        "##      ",
        "##    ##",
        " ###### "};
        
    char (*c1)[9] = &c[0];
    
    printf("%s", *(c1 +a));
        
        
    
    
}
