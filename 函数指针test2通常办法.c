#include <stdio.h>

void calc(float, float);
float add(float, float);
float sub(float, float);
float mul(float, float);
float divi(float, float);

float add(float f1, float f2)
{
        return f1 + f2;
}

float sub(float f1, float f2)
{
        return f1 - f2;
}

float mul(float f1, float f2)
{
        return f1 * f2;
}

float divi(float f1, float f2)
{
        return f1 / f2;
}

void calc(float f1, float f2)
{
        printf("%.2f ", add(f1, f2));
        printf("%.2f ", sub(f1, f2));
        printf("%.2f ", mul(f1, f2));
        printf("%.2f ", divi(f1, f2));
}



int main(void)
{
        float f1, f2;
        int count;

        do
        {
        printf("Input two float plz:");
        count = scanf("%f %f",&f1, &f2);
        }while (f2 == 0.);
        
        // printf("%.2f, %.2f\n", f1, f2);

        printf("After calculation the answer are:");

        calc(f1, f2);
        printf("\n");


        return 0;
}