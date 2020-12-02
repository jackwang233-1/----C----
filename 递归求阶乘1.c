#include <stdio.h>

long recursion(int);

int num;
int value = 1;


long recursion(int c)
{



        if (num--)
        {
                value *= c;
                recursion(num);
        }
        return value;
}

int main()
{
        printf("Input a integer:");
        scanf("%d", &num);
        
        printf("%ld\n", recursion(num));
        return 0;
}
