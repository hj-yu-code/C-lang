#include <stdio.h>
#include <string.h>
void myStrcpy(char *to, char *from);

int main(){
    char s1[20] = "kingdom", s2[20], s3[20];

    strcpy(s2, s1);
    printf("s1: %s, s2: %s \n", s1, s2);

    myStrcpy(s3, s1);
    printf("s1: %s, s3: %s \n", s1, s3);
}

void myStrcpy(char *to, char *from){
    while (*from)
    {
        *(to) = *from;
        from++;
        to++;
    }
    *to= '\0';
}