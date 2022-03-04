#include <stdio.h>

int main(){
    int i, dan;

    for(dan=2; dan<=9; dan++){
        for(i=1; i<=9;i++){
            printf("%d * %d = %d", dan, i , dan * i);
            if(i<9) printf(",\t");
        }
        printf("\n");
    }
    printf("\n");
    for(i=1; i<=9;i++){
        for(dan=2; dan<=9; dan++){
            printf("%d * %d = %d", dan, i , dan * i);
            if(dan<9) printf(",\t");
        }
        printf("\n");
    }
    
    printf("\n");
    i = 1;
    while (i<=9)
    {   
        dan = 2;
        while (dan<=9)
        {
            printf("%d * %d = %d", dan, i , dan * i);
            if(dan<9) printf(",\t");
            dan++;
        }
        i++;
        printf("\n");
    }
    

    return 0;
}