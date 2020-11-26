#include<stdio.h>

#define URL "http://www.fishc.com"
#define NAME "fishc studio"
#define BOSS "Turtle"
#define YEAR 2010
#define MONTH 5
#define DAY 50

int main(void)
{
    printf("%s成立于%d年%d月%d日\n", NAME, YEAR, MONTH, DAY);
    printf("%s是%s创立的……\n", NAME, BOSS);
    printf("%s的域名是%s\n", NAME, URL);
    
    return 0;
}
