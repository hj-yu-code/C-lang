#include <stdio.h>
void funcA(int age);
void funcB();
void funcD();

int g = 200;
int main(){
    int age = 27;
    printf("main() age: %d, %d   g: %d, %d\n", age, &age, g, &g);
    
    funcA(age);
    printf("main() age: %d, %d   g: %d, %d\n", age, &age, g, &g);
    
    funcB();
    printf("main() age: %d, %d   g: %d, %d\n", age, &age, g, &g);

    funcD();
    funcD();
    funcD();
    return 0;
}

void funcA(int age){
    
    printf("funcA() age: %d, %d   g: %d, %d\n", age, &age, g, &g);
    age = 35;
    printf("funcA() age: %d, %d   g: %d, %d\n", age, &age, g, &g);
}

void funcB(){
    int age = 7;
    g += 20;
    printf("funcB() age: %d, %d   g: %d, %d\n", age, &age, g, &g);
}

void funcD(){
    int sum1 =1;
    static int sum2 = 1;
    printf("sum1: %d, sum2: %d \n", sum1++, sum2++);
}