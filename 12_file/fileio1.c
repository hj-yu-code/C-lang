#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch;

    //save
    fp = fopen("data1.txt", "wt");
    if(fp== NULL){
        printf("file open error. \n");
        exit(1);
    }

    puts("stdout -> disk");
    while ((ch = fgetc(stdin)) != EOF)
    {
        fputc(ch, fp); //^Z
    }
    fclose(fp);

    //open
    // fp = fopen("data1.txt", "rt");
    // if(fp== NULL){
    //     printf("file open error. \n");
    //     exit(1);
    // }

    // puts("disk -> stdout");
    // while ((ch = fgetc(fp)) != EOF)
    // {
    //     fputc(ch, stdout);
    // }
    // fclose(fp);
    return 0;
}