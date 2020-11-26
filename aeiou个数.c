#include <stdio.h>

int main()
{
    int K;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Input a English sentence:");

    while ((K = getchar()) != '\n')
    {
     switch (K)
     {
        case 'a': a += 1; continue;
        case 'A': a += 1; continue;
        case 'e': e += 1; continue;
        case 'E': a += 1; continue;
        case 'i': i += 1; continue;
        case 'I': a += 1; continue;
        case 'o': o += 1; continue;
        case 'O': a += 1; continue;
        case 'u': u += 1; continue;
        case 'U': a += 1; continue;
     }
    }

    printf("You input %d aeiou\n", a + e + i + o + u);
    printf("a(%d), e(%d), i(%d), o(%d), u(%d)", a, e, i, o, u);


    return 0;
}
