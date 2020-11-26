#include <stdio.h>

int main()
{

    long long i, j;
    long long rem = 0;
    _Bool flag = 0; // _Bool ∫‹”–”√£¨ºÚΩ‡

    printf("Input a integer:");

    scanf("%lld", &i);

    for (j = 2; j <= i / 2; j++)
    {
        rem = i % j;

        if ( rem != 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Not");
    }
    else
    {
        printf("it is Prime Numbers");

    }
}





//#include <stdio.h>
//
//int main()
//{
//
//   long long i, j, rem;   // i -> input ; j -> for loop ; rem -> remainder
//
//   printf("Input a integer:");
//   scanf("%d", &i);
//
//   for (j = 2; j <= i / 2; j++)   //for (j = 2; j <= i / 2; j += 1)
//   {
//       rem = i % j;
//       if (rem == 0)
//       {
//           printf("The integer you input is not a prime number\n");
//           break;
//       }
//   }
//   if (j == i / 2 + 1 && rem != 0)
//   {
//       printf("Right, the integer you input is  prime number\n");
//   }
//
//   return 0;
//
//
//
//
//
//
//}

