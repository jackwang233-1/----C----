#include <stdio.h>

int main()
{
        char a[] = "FishC";
        int b[5] = {1, 2, 3, 4, 5};
        float c[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
        double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

//        char *p = a;

        printf("*p = %d, *(p+1) = %d, *(p+2) = %d\n", *b, *(b+1), *(b+2));

        return 0;
}
