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
    printf("���� : ȫ�浿\n");
}

void myAge() {
    printf("���� : %d \n", AGE);
}