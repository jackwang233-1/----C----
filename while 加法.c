#include <stdio.h>

int main()
{
    int i;
    int count = 0;
    long long temp = 0, num = 0;
    printf("Input a integer:");
    do
    {

        i = getchar();
        count += 1;


        if ( 1 == count )
        {
            if (i >= '0' && i <= '9')
        {
            num =  i - 48;

        }


        else if ( i == '\n')
        {
            count = 0;
            temp += num;
            printf("\ntemp = %d\n", temp);
            printf("\nnum = %d\n", num);
            printf("Input a integer:");
            continue;
        }
        else if (i < '0' || i > '9')
        {
            printf("Answer is : %lld\nBye!Plz close the window", temp);
            break;
        }
        }
        else
        {


        if (i >= '0' && i <= '9')
        {
            num = num * 10  + i - 48;
        }


        else if ( i == '\n')
        {
            count = 0;
            temp += num;
            printf("\ntemp = %d\n", temp);
            printf("\nnum = %d\n", num);
            printf("Input a integer:");
            continue;
        }
        else if (i < '0' || i > '9')
        {
            printf("Answer is : %lld\nBye!, num);
            break;

        }
        }
    }
    while (1);



    return 0;
}
