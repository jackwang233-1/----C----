#include <stdio.h>



int main()
{
        char str1[] ="aisdasdfasdfjfioas", str2[sizeof(str1) / sizeof(str1[0]) ];
        
        for (int i = 0; i < sizeof(str1) / sizeof(str1[0]); i++)
        {
            str2[i] = str1[i];
        }
        str2[sizeof(str1) / sizeof(str1[0]) ] = '\0';
        
        printf("%s", str2);
            
        return 0;
}
