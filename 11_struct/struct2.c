#include <stdio.h>
#include <string.h>
#define EMP_SZ 3

int main(){
    struct EMPLOYEE {
        char name[20];
        int salary;
        float height;
        char comAddr[50];
    } EMP;
    
    struct EMPLOYEE emps[EMP_SZ] ;
    int i, Cn;
    
    for(i=0; i<EMP_SZ; i++){
        printf("���� ? (�Է�����: end) ");
        gets(emps[i].name);
        // if (strcmp(emps[i].name, "end") == 0)
        if (!strcmp(emps[i].name, "end"))
            break;
        printf("���� ? ");
        scanf("%d", &emps[i].salary);
        printf("Ű(����) ? ");
        scanf("%f%*c", &emps[i].height);
        printf("ȸ���ּ� ? ");
        gets(emps[i].comAddr);
    }

    Cn = i; // end�� �������� ����

    for(i=0; i<Cn; i++){
        printf("%s, %d, %.2f, %s \n", emps[i].name, emps[i].salary, emps[i].height, emps[i].comAddr);
    }

    return 0;

}