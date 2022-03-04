#include <stdio.h>


int main(){
    int num, cnum;
    int count = 0;
    int sum = 0;
    printf("정수를 입력하세요 : ");
    scanf("%d%*c", &num);
    
    cnum = num;
    while (cnum<=100)
    {   
        sum+= cnum;
        count++;
        cnum += num;
    }
    
    printf("%d의 배수의 합: %d, 갯수: %d", num, sum, count);
    return 0;

}