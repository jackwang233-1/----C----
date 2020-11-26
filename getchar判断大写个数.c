#include <stdio.h>

int main()
{
    int count;
    char i;
    
       while ((i = getchar() ) != '\n')
       {
           if ((int)i >= 41 && (int)i <= 90)
           {
               count += 1;
           }
       }
       printf("%d capitals in string.", count);
       
       return 0;
}
    
    
    
    
