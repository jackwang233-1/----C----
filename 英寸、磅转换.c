#include <stdio.h>

int main()
{
    char name[256]; // 除了这个没发现有啥好的
    int height;
    float weight;

    printf("PLZ input ur name:");
    scanf("%s", &name);
    printf("PLZ input ur height:");
    scanf("%d", &height);
    printf("PLZ input ur weight:");
    scanf("%f", &weight);
    printf("Now Calculating...\nThe height of %s is %.2f(in), weight is %.2f(lb).", name, height * 0.394, weight * 2.205);



    return 0;
}



