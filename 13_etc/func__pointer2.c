#include <stdio.h>
int add(int x, int y){
    return x + y;
}

int sub(int x, int y){
    return x - y;
}

// 함수포인터 자료형
typedef int (*FP)(int, int);

void funCacl(int (*fp5)(int, int)){
    printf("funCacl(): %d \n", (*fp5)(400, 30));
}
void funCacl2(FP fp6){
    printf("funCacl2(): %d \n", (*fp6)(500, 30));
}

int main(){
    int ret;

    ret = add(100, 30);
    printf("add(): %d\n", ret);

    int (*fp1)(int, int);
    fp1 = sub;
    ret = (*fp1)(100, 30);
    printf("sub(): %d\n", ret);

    // 함수포인터 자료형 사용
    FP fp2;
    FP fp3;

    fp2= add;
    fp3= sub;

    printf("add(): %d \n", (*fp2)(200, 30));
    printf("sub(): %d \n", (*fp3)(200, 30));

    // 함수포인터 배열 선언
    FP fp4[5];
    fp4[0] = add;
    fp4[1] = sub;

    printf("add(): %d \n", (*fp4[0])(200, 30));
    printf("sub(): %d \n", (*fp4[1])(200, 30));
    // printf("add(): %d \n", (**fp4)(200, 30));
    // printf("sub(): %d \n", (**(fp4+1))(200, 30));

    // 함수를 호출할때 함수 주소를 실인수로 전달
    // 함수 내부에서 변수 넣어줌
    funCacl(add);
    funCacl(sub);
    funCacl2(add);
    funCacl2(sub);


    return 0;
}