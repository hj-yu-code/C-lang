#include <stdio.h>
void salCal(int *tmp, int size);
int *funA();

int main(){
    int salary[] = {1500, 3000, 4500, 7000, 2700, 3500};
    int size;

    // printf("salCal(); %d \n", salary[0]);
    size = sizeof(salary)/sizeof(salary[0]);
    salCal(salary, size);

    int *sudang;
    sudang = funA();
    printf("main() sudang: %d \n", *sudang);

    funB();
    funD();
    return 0;

}

void salCal(int *tmp, int size){
// salCal(int tmp[9], int size){
    int i, salTol =0 ;
    printf("salCal(); %p, %d \n", tmp, sizeof(tmp));

    for(i=0;i<size; i++){
        printf("%d, ", *(tmp +i));
        // printf("%d, ", tmp[i]);
        salTol += *(tmp+i);
    }
    printf("\n���; %.2f \n", (float)salTol/size);
}

int *funA(){
    static int su;
    printf("\nfunA() ���� ? ");
    scanf("%d", &su);

    return &su;
}

funB(){
    const float PI = 3.14159;
    int n1 = 100, n2= 200;
    int *p1 = &n1;
    *p1 =150;

    printf("\nfunB() n1: %d \n", n1);

    const int *p2 = &n2;
    // *p2 = 250; �̰� �ȵ�
    printf("funB() n2: %d \n", n2);

}

funD(){
    char *p1;
     // = "Hello world !!"; �Ҵ����ڸ��� �ּ����� ����
    // ���ڿ� ��� ������
    p1 = "Hello world !!"; // �ٸ����� ����ǰ�, p1���� �̰��� �ּҸ� �����
    printf("\nfunD() p1: %p, %s \n", p1, p1);
}