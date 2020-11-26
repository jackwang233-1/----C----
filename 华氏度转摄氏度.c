#include <stdio.h>

int main()
{

    float temperature;

    printf("Input the value of Fahrenheit:");
    scanf("%f", &temperature);
    printf("\nThe value of %.2f exchange to centigrade is %.2f.", temperature, (temperature - 32) * 5 / 9);

    return 0;
 }


