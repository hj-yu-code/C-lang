#include <stdio.h>
void myFunc(char *tmp);

int main(){
    // myFunc("this is a test.");
    void (*fptr)(char *); // 함수포인터 변수 선언
    printf("fptr sizeof : %d \n", sizeof(fptr));

    fptr = myFunc; // 함수 주소 할당

    (*fptr)("multi campus"); // 함수 호출
    // fptr("campus");

    return 0;
}

void myFunc(char *tmp){
    printf("myFunc(): %p, %s \n", tmp, tmp);
}