#include <stdio.h>

int main(){
    double d;
    double *dp;
    char *ptr;

    d = 1.5;
    printf("%lf, %p\n", d, &d);
    dp = &d;
    printf("%lf, %p\n", *dp, dp);
    printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));
    
    return 0;
}