#include <stdio.h>

// int main(){
//     char ch = 'A';
//     int count = 100;
//     float pi = 3.14F;
//     double area = 5.6;

//     printf("%c, %d, %f, %lf \n", ch, count, pi, area);

//     int *point = &count;

//     scanf("%d", &count);
//     printf("%d \n", count);
    
//     printf("%p \n", &count);
//     printf("%p \n", point);
    
    
//     printf("포인터로 저장하기 \n");
//     scanf("%d", point);
//     printf("%d \n", count);
// }

// int main(){
//     char a[8];
//     char *ptr;
//     a[0]='a';
//     a[1]='b';
//     a[2]='c';
//     a[3]='d';
//     a[4]='e';
//     a[5]='f';
//     a[6]='g';
//     a[7]='\0';

//     ptr = a;
//     printf("%c\n", *ptr);
    
//     printf("%c\n", *ptr+3);

//     printf("%c\n", *(ptr+3));

//     ptr = ptr + 3;
//     printf("%c\n", *ptr);

//     return 0;
// }

void test(){
    
}

int main() { 
    int a=5; 
    int *b;

    b = &a;
    printf("a = %d, &a = %p, b = %p, *b = %d\n", a, &a, b, *b); 
    
    
    a = 10;
    printf("a = %d, &a = %p, b = %p, *b = %d\n", a, &a, b, *b); 

    *b += 5; 
    printf("a = %d, &a = %p, b = %p, *b = %d\n", a, &a, b, *b); 

    *b += 5; 
    printf("a = %d, &a = %p, b = %p, *b = %d\n", a, &a, b, *b); 

    test(&a);
    return 0;
}

