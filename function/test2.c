#include <stdio.h>


int main(){
    int num, cnum;
    int count = 0;
    int sum = 0;
    printf("������ �Է��ϼ��� : ");
    scanf("%d%*c", &num);
    
    cnum = num;
    while (cnum<=100)
    {   
        sum+= cnum;
        count++;
        cnum += num;
    }
    
    printf("%d�� ����� ��: %d, ����: %d", num, sum, count);
    return 0;

}