#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMPLOYEE {
	char name[20];
	int salary;
	float height;
	char comAddr[40];
    struct EMPLOYEE *before;
    struct EMPLOYEE *next;
};

int main()
{
	struct EMPLOYEE *ptr, *prev; // 구조체 포인터 변수

    struct EMPLOYEE *head, *tail;
    head = tail = NULL;

    while (1)
    {
        ptr = (struct EMPLOYEE*)malloc(sizeof(struct EMPLOYEE));
        if (ptr == NULL){
			perror("Error");
			exit(1);
		}

        printf("성명 ? (입력종료:end) ");
        gets(ptr->name);
        if(!strcmp(ptr->name, "end"))
            break;
        printf("월급 ? ");
        scanf("%d", &ptr->salary);
        printf("키(신장) ? ");
        scanf("%f%*c", &ptr->height);
        printf("회사주소 ? ");
        gets(ptr->comAddr);

        ptr->before = NULL;
        ptr->next = NULL;

        if(head == NULL){
            head = tail = ptr;
        }else{
            ptr->before = tail;
            tail->next = ptr;
            tail = ptr;
        }
    }
    printf("\n");
    // node print
    printf("==head->tail=======\n");
    ptr = head;
    while (ptr)
    {
        printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
        ptr = ptr->next;
    }

    printf("==head->tail=======\n");
    ptr = tail;
    while (ptr)
    {
        printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
        ptr = ptr->before;
    }
    // node unlinked
    ptr = head;
    while (ptr)
    {
        prev = ptr;
        ptr = ptr->next;
        free(prev);
    }
    ptr = NULL;

}