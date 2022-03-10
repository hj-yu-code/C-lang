#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *in, *out;

    char ch;

    in = fopen("data1.txt", "rt");
    if(in== NULL){
        printf("file open error. \n");
        exit(1);
    }

    out = fopen("data1.bok", "wt");
    if(out== NULL){
        printf("file open error. \n");
        exit(1);
    }
    // file copy
    while ((ch = fgetc(in)) != EOF)
    {
        fputc(ch, out); //^Z
    }

    fclose(in);
    fclose(out);

    puts("data1.bok 파일 복사.");

    return 0;
}