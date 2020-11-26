#include <stdio.h>
#include <math.h>

#define total area * price
#define first_loan total * time * 0.1
#define fir total - first_loan
#define mon_per per / 12 * 0.01
#define fee_mon first_loan * ( mon_per * pow((1 + mon_per), years * 12)) / ( pow((1 + mon_per), years * 12) - 1)
#define interest years * 12 * fee_mon - first_loan
#define total_fee years * 12 * fee_mon

int main()
{
        int price, area, time, years;
        float per;

        printf("plz input the price:");
        scanf("%d", &price);
        printf("\nplz input the area:");
        scanf("%d", &area);
        printf("\nplz input the time:");
        scanf("%d", &time);
        printf("\nplz input the years:");
        scanf("%d", &years);
        printf("\nplz input the annual interest rate:");
        scanf("%f", &per);
        printf("Calculating...");
        printf("\ntotal price: %d yuan",total );
        printf("\nfirst loan: %.2f yuan", first_loan);
        printf("\nfirst fee: %.2f yuan", fir);
        printf("\nprice total fee: %.2f yuan", total_fee);
        printf("\ninterest: %.2f yuan", interest);
        printf("\nfee of each month: %.2f yuan", fee_mon);

        return 0;

}
