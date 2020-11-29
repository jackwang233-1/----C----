#include <stdio.h>

void get_array(int a[10]);

void get_array(int a[10])
{
    printf("IN FUNCTION: sizeof a: %ld\n", sizeof(a));      // 8 is size of the addr
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    printf("sizeof a: %ld\n", sizeof(a));
    
    get_array(a);
    
    return 0;
}
