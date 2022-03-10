#include <stdio.h>
#include <stdlib.h>


struct  STUDENT {
    char name[20];
    int kor;
    int eng;
    int mat;
    float avg;
};

int main(){
    FILE *fp;
    struct  STUDENT stu = {"ȫ�浿", 89, 91, 70};
    
    char tmp[80];
    fp = fopen("", "rt");

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