#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    int power;
    printf("Input the value of the variable number Plz : %d", number);  //不知道为啥多个0
    scanf("%d", &number);
    printf("\nInput the value of the variable power Plz : %d", power);
    scanf("%d", &power);
    printf("\nThe value of %d to the %dth power is : %e\n", number, power, pow(number, power));

    return 0;
}


