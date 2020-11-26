#include<stdio.h>
int main(void)
{
    int r;
    float c;
    double s;
    r = 5;
    c = 2 * 3.14 * r;
    s = 3.14 * r * r;
    printf("半径为%d的圆，周长是发%f，面积是%f\n", r, c, s);
    return 0;
}
