#include <stdio.h>
void funcA(char  **tmp);

int main(){
//            ����������       ����������
    int num,    *ip,            **mip;
    printf("%d, %d, %d \n", sizeof(num), sizeof(ip), sizeof(mip));

    ip = &num;
    mip = &ip;

    **mip = 50;

    printf("%d, %d, %d \n", num, *ip, **mip);

    char *ptr[] = { "kingdom", "multi campus", "hello world",
                    "one �ϳ�", "two ��", "seoul ����",
                    "busan �λ�", NULL};

    funcA(ptr);
    printf("\n");

    return 0;
}

void funcA(char  **tmp){
    printf("funcA(): %p, %d \n\n", tmp, sizeof(tmp));

    while( *tmp ){
        // printf("%p: %s \n", tmp, *tmp);
        printf("%u: %u, %s", tmp, *tmp, *tmp);
        
        // ���ڼ� ����
        int count = 0;
        char *word_ptr = *tmp;
        while( *word_ptr ){
            word_ptr++;
            count++;
        }
        printf("  \t // len: %d \n", count);

        tmp++;
    }
}
