#include <stdio.h>
void myFunc(char *tmp);

int main(){
    // myFunc("this is a test.");
    void (*fptr)(char *); // �Լ������� ���� ����
    printf("fptr sizeof : %d \n", sizeof(fptr));

    fptr = myFunc; // �Լ� �ּ� �Ҵ�

    (*fptr)("multi campus"); // �Լ� ȣ��
    // fptr("campus");

    return 0;
}

void myFunc(char *tmp){
    printf("myFunc(): %p, %s \n", tmp, tmp);
}