#include <stdio.h>

int main(){
    char ch, i;
    char input;
    printf("input char ? ");
    input = getchar();
    for(i=1; i<=3;i++){
        ch = 'A';
        while (ch <= 'Z'){
            printf("%c ", ch);
            if(ch== input){
                // break;
                goto move;
            }
            ch++;
        }
        printf("\n");

    }
    if(0){
        move: // 레이블, 표시 부분인 것뿐
        printf("End.\n");
        return 0;
    }
}