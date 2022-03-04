//file1.c

#include <stdio.h>
#include "file.h"

void myName();
void myAge();
void mySal();

int main() {
    myName();
    myAge();
    mySal();
    return 0;
}

void myName() {
    printf("성명 : 홍길동\n");
}

void myAge() {
    printf("나이 : %d \n", AGE);
}