#include <stdio.h>
void funcA(char  **tmp);

int main(){
//            단일포인터       이중포인터
    int num,    *ip,            **mip;
    printf("%d, %d, %d \n", sizeof(num), sizeof(ip), sizeof(mip));

    ip = &num;
    mip = &ip;

    **mip = 50;

    printf("%d, %d, %d \n", num, *ip, **mip);

    char *ptr[] = { "kingdom", "multi campus", "hello world",
                    "one 하나", "two 둘", "seoul 서울",
                    "busan 부산", NULL};

    funcA(ptr);
    printf("\n");

    return 0;
}

void funcA(char  **tmp){
    printf("funcA(): %p, %d \n\n", tmp, sizeof(tmp));

    while( *tmp ){
        // printf("%p: %s \n", tmp, *tmp);
        printf("%u: %u, %s", tmp, *tmp, *tmp);
        
        // 글자수 세기
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
