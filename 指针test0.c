#include <stdio.h>


int main()
{
    int a, b, c;
    int *d = 0, *e = 0, *f = 0, *g = 0;

    printf("Input 3 num plz:");
    scanf("%d%d%d", &a, &b, &c);

    d = &a;
    e = &b;
    f = &c;

    if (a > b)
    {
        g = d;  // *g = *d ²»ÐÐ
        d = e;
        e = g;
    }
    if (a > c)
    {
        g = d;
        d = f;
        f = g;
    }
    if (b > c)
    {
        g = e;
        e = f;
        f = g;
    }

    printf("%d <= %d <= %d\n", *d, *e, *f);




    return 0;


}
