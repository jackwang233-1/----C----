#include <stdio.h>

int main()
{
    float i,j;
    char k;

    printf("input a formula:");
    scanf("%f %c %f", &i, &k, &j);

//    switch((int)k)        // 两种方式都可以
//    {
//        case  43: printf("The answer is %.2f", i + j); break;
//        case  45: printf("The answer is %.2f", i - j); break;
//        case  42: printf("The answer is %.2f", i * j); break;
//        case  47:
    switch(k)
    {
        case  '+': printf("The answer is %.2f", i + j); break;
        case  '-': printf("The answer is %.2f", i - j); break;
        case  '*': printf("The answer is %.2f", i * j); break;
        case  '/':

            if (j == 0)
            {
                printf("The divisor cannot be zero");
            }
            else
            {
                printf("The answer is %.2f", i / j); break;
            }
    }


    return 0;
}




