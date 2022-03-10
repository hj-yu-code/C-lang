#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;

    char tmp[80];
    fp = fopen("C:\\Users\\Hyejeong\\Documents\\GitHub\\C-lang\\3_basic\\vstest.c", "rt");

    if(fp== NULL){
        printf("file open error. \n");
        exit(1);
    }

    while (1)
    {
        /* code */
        if(fgets(tmp, 80, fp))
            printf("%s", tmp);
        else
            break;
    }
    fclose(fp);
    return 0;
}