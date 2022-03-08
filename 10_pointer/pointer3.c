#include <stdio.h>
#define type(x) _Generic((x),                                                     \
        _Bool: "_Bool",                  unsigned char: "unsigned char",          \
         char: "char",                     signed char: "signed char",            \
    short int: "short int",         unsigned short int: "unsigned short int",     \
          int: "int",                     unsigned int: "unsigned int",           \
     long int: "long int",           unsigned long int: "unsigned long int",      \
long long int: "long long int", unsigned long long int: "unsigned long long int", \
        float: "float",                         double: "double",                 \
  long double: "long double",                   char *: "char *",                 \
       void *: "void *",                         int *: "int *",                  \
      default: "unknown")

int main(){
    int num[5] = { 100, 200, 300, 400, 500};
    int i, *ptr;
    ptr = num;

    printf("%s\n", type(ptr));

    for(i=0; i<5; i++){
        printf("%p: %d, %d, %d, %d \n", &num[i], num[i], *(ptr+i), *(num+i), ptr[i]);
        printf("%p: %d, %d \n", &num[i], num[i], *ptr+i);
        printf("\n");
    }
    printf("\n");

    char str[20] = "kingdom", *p2;
    p2 = str;

    printf("%c, %c, %c, %c \n", str[0], *(str+0), *(str+1), *p2);
    printf("%p, %s, %s \n", str, str, p2);

    // k i n g o d o m \0
    while (*p2) // '\0'ÀÌ µÇ¸é stop
    {
        printf("%c, ", *p2);
        p2++;
    }
    


    return 0;
}