//file1.c

#include "file.h"
int salary = 350000;

int main(){
    myName();
    myAge();
    mySal();

    printf("수령액 : %d \n", salary);
    return 0;
}

void myName(){
    printf("성명 : 홍길동\n");
}

void myAge(){
    printf("나이 : %d \n", AGE);
}