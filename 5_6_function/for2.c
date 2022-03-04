#include <stdio.h>

int main(){
    int i, sum =0, start, end;
    printf("start : ");
    scanf("%d", &start);
    printf("end : ");
    scanf("%d", &end);

    if(start>end){
        int tmp = start;
        end = start;
        start = tmp;
    }

    for(i = start; i<= end; i++){
        sum += i;
        
        if(sum>3000){
            break;
        }
    }

    printf("%d에서 %d까지의 합 : %d \n", start, end, sum);
    return 0;
}