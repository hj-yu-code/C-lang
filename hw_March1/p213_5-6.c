// p213_5-6.c
#include <stdio.h>

int main(){
    int pound;
    float kg;
    char ch;

    printf("P)pound->kg, K)kg-pound ? ");
    ch = getchar();
    if(ch == 'P'|| ch =='p'){
        printf("�Ŀ�� �Է� ? ");
        scanf("%d%*c", &pound);
        printf("%d �Ŀ��� %.3f ų�α׷��̴�.\n", pound, pound * 0.45359237);
    }
    else if(ch == 'K'|| ch =='k'){
        printf("ų�α׸� �Է� ? ");
        scanf("%f%*c", &kg);
        printf("%.3f ų�α׷��� %.3f �Ŀ���̴�.\n", kg, kg / 0.45359237);
    }
    else{
        printf("unknown command. \n");
    }
    return 0;
}