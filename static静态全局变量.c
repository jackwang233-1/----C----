#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{       
        int temp, l = 10;
        _Bool flag = 1;
        int shuf[l];
        
        srand(time(NULL));
        shuf[0] = rand() % l;
        for (int i = 1; i < l; i++)
        {
                flag = 1;
                while (flag)
                {
                        
                        temp = rand() % l;
                        for (int j = 0; j < i; j++)
                        {
                                if (temp == shuf[j])
                                {
                                        flag = 1;
                                        break;
                                }
                                flag = 0;
                                
                        }
                }
                shuf[i] = temp;
        }
                
        for (int i = 0; i < l; i++)
        {
                printf("%d\n", shuf[i]);
        }
        return 0;
}
