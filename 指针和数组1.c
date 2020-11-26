#include <stdio.h>

int main()
{
    char str[128];

    printf("Input the www of the fishc:");
    scanf("%s", str);

//    printf("the www is: %s\n", str);
    printf("the adr of str is: %p\n", &str[0]);
    printf("the adr of str is: %p\n", str);



    return 0;

}
