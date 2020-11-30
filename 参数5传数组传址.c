#include <stdio.h>

void a(char *str);
void a(char *str)
{
    
    str[1] = 'c'; 
    
}

int main()
{
    char str[10] ;
    
    a(str);
    printf("%c",str[1]);
    
    /*
    *(str+1) = '6';
    
    printf("%c", str[1]);*/
    return 0;
}
