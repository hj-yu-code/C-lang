// p215_5-7.c
#include <stdio.h>

int main(){
    char ch, i;
    for(i='A'; i<='Z'; i++){
        for(ch='A'; ch<=i; ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}