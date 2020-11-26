#include <stdio.h>

int main()
{

    int i , count = 0;
    int rem = 1;
    _Bool flag = 0;


    for (i = 4; i <= 10000; i++)
    {

        for (int j = 2; j <= i / 2; j++)
        {
            rem = i % j;

            if ( rem == 0)
            {
                break;

            }
        }
         if ( rem == 0)
            {
                continue;

            }
        count += 1;

    }
    printf("there is %d zhishu\n", count + 2);
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

