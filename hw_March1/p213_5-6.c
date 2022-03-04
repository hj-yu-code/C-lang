// p213_5-6.c
#include <stdio.h>

int main(){
    int pound;
    float kg;
    char ch;

    printf("P)pound->kg, K)kg-pound ? ");
    ch = getchar();
    if(ch == 'P'|| ch =='p'){
        printf("파운드 입력 ? ");
        scanf("%d%*c", &pound);
        printf("%d 파운드는 %.3f 킬로그램이다.\n", pound, pound * 0.45359237);
    }
    else if(ch == 'K'|| ch =='k'){
        printf("킬로그림 입력 ? ");
        scanf("%f%*c", &kg);
        printf("%.3f 킬로그램은 %.3f 파운드이다.\n", kg, kg / 0.45359237);
    }
    else{
        printf("unknown command. \n");
    }
    return 0;
}