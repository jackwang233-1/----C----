#include <stdio.h>

int main()
{
        int i;
        i = 1515415614;
        
        int o;
        o = 5366;
        
        char j;
        j = 'c';
		
        char* s;
        s = "ajsdndfgdsgfsfo";
        
        float k;
        k = 3.14;
        
        printf("%d\n", i);
        printf("size of int is %ld\n", sizeof(int)); 	// 和内容无关
        printf("size of i is %ld\n", sizeof i); 	// 和内容无关
        printf("size of char is %ld\n", sizeof(char));
        printf("size of j is %ld\n", sizeof j);
        printf("size of float is %ld\n", sizeof (float));
        printf("size of k is %ld\n", sizeof k);
		printf("size of char* is %ld\n", sizeof (char*));
        printf("size of s is %ld\n", sizeof s);
        
        return 0;
}
    
