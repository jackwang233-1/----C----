#include <stdio.h>

#define tomato 3.5 / 2	// 这种形式可以用
#define ganlan 7/2
#define xiqin 1.3/2
#define cabbage 4
#define onion 1.2
#define youcai 4.5
#define cucumber 3.15
#define bailuobo 0.25

int main()
{
    printf("小明需要支付%.2f元", 2 * tomato + cabbage + youcai);
    printf("小红需要支付%.2f元", 3 * xiqin + 0.5 * onion + 5 * cucumber);
    printf("小甲鱼需要支付%.2f元", 10 * cucumber + 20 * bailuobo);
    
    return 0;
}
           
