#include <stdio.h>

int main(){
    struct EMPLOYEE {
        char name[20];
        int salary;
        float height;
        char comAddr[50];
    };
    struct EMPLOYEE size_emp;
    printf("%d, %d \n", sizeof(size_emp), sizeof(struct EMPLOYEE));
    struct EMPLOYEE emps = {"ȫ�浿", 40, 340.5, "�����"};
    printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);

    printf("���� ? ");
    gets(emps.name);
    printf("���� ? ");
    scanf("%d", &emps.salary);
    printf("Ű(����) ? ");
    scanf("%f%*c", &emps.height);
    printf("ȸ���ּ� ? ");
    gets(emps.comAddr);


    printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);

    return 0;
}