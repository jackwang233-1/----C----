#include<stdio.h>
int main(void)
{
    int a;
    char b;
    float c;
    double d;
    
    a = 520;
    b = 'F';
    c = 3.14;
    d = 3.141592653;
    
    printf("鱼c工作室创办与2010年的%d\n", a);
    printf("I love %cishC.com!\n", b);
    printf("圆周率是：%.2f\n", c);  //.2f表示精确到2位小数
    printf("精确到小数点后9位的圆周率是：%11.9f\n", d); // 11.9f表示总长度为11,小数点后有9位、
    return 0;
}
