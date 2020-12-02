#include <stdio.h>
#include <string.h>

#define fang 方


int main()
{  
    char str[54][100];
    
    char f[100] = "方";
    char strtemp[] = "564";
    strcat(f, strtemp);
    strcpy(str[0], f);
    
//     printf("%s", str[0]);
    sprintf(str[1], "%s%s", f, str[0]);
    printf("%s", str[1]);
    
    
    return 0;
                

} 
