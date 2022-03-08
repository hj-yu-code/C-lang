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
    struct EMPLOYEE emps = {"홍길동", 40, 340.5, "서울시"};
    printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);

    printf("성명 ? ");
    gets(emps.name);
    printf("월급 ? ");
    scanf("%d", &emps.salary);
    printf("키(신장) ? ");
    scanf("%f%*c", &emps.height);
    printf("회사주소 ? ");
    gets(emps.comAddr);


    printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);

    return 0;
}