#include <stdio.h>

#define STRING char *
#define IF if(
#define THEN ){
#define ELSE }else{
#define FI ;}
#define WHILE while(
#define DO ){
#define OD ;}
#define INT int
#define BEGIN {
#define END }

INT main()

BEGIN
        INT i;
        
        printf("HOW OLD ARE YOU:");
        scanf("%d", &i );
        
        IF 
            i < 18 THEN
            printf("You are under 18!\n");
        ELSE
            printf("You are above 18!\n");
        END
        
        return 0;
        END
        
