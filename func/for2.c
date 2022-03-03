#include <stdio.h>

int main(){
    int i, sum =0, start, end;
    printf("start : ");
    scanf("%d", &start);
    printf("end : ");
    scanf("%d", &end);

    for(i = start; i<= end; i++){
        sum += i;
    }

    printf("%d에서 %d까지의 합 : %d \n", start, end, sum);
}