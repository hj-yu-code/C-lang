#include <stdio.h>

int main(){
    int num = 100;
    int num2 = 400;
    // double dnum = 1.5;

    printf("���� : %d, �Ǽ� : %f, ���� : %c \n", 100, 1.5, 'z');
    printf("���� : %d, �Ǽ� : %.2f, ���� : %c \n", 100, 1.5, 'z');
    printf("���� : %d, �Ǽ� : %2f, ���� : %c \n", 100, 1.5, 'z');
    printf("%d + %d = %d \n", 100, 200, 100+200);
    printf("%d + %d = %d \n", num, num2, num+num2);

    printf("noF: %d, F: %d \n", sizeof(3.4), sizeof(3.4F));
    
    float dnum = 1.5;
    float fnum = 1.5F;
    int inum = 1.5;
    printf("noF: %d, F: %d \n", sizeof(dnum), sizeof(fnum));
}