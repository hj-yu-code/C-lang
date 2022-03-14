// ���ڿ� ���� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMPLOYEE {
	char name[20];
	int salary;
	float height;
	char *comAddr; //4byte
    struct EMPLOYEE *next;
};

int main()
{
	struct EMPLOYEE *ptr, *prev;
    char tmp[200];
    struct EMPLOYEE *head, *tail;
    head = tail = NULL;

    while (1)
    {
        ptr = (struct EMPLOYEE*)malloc(sizeof(struct EMPLOYEE));
        if (ptr == NULL){
			perror("Error");
			exit(1);
		}

        do {
            printf("���� ? (�Է�����:end) ");
            gets(tmp);

        } while (strlen(tmp)>= sizeof(ptr->name));
        strcpy(ptr->name, tmp);
        
        if(!strcmp(ptr->name, "end"))
            break;
        printf("���� ? ");
        scanf("%d", &ptr->salary);
        printf("Ű(����) ? ");
        scanf("%f%*c", &ptr->height);

        printf("ȸ���ּ� ? ");
        gets(tmp);

        ptr->comAddr = (char*)malloc(strlen(tmp)+1); //�޸� �Ҵ� �� �ּ� �Է�
        // null ������ ���� 1�߰�
        strcpy(ptr->comAddr, tmp);

        ptr->next = NULL;

        if(head == NULL){
            head = tail = ptr;
        }else{
            tail->next = ptr;
            tail = ptr;
        }
    }
    free(ptr); // end node ����

    // node print
    ptr = head;
    while (ptr)
    {
        printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
        ptr = ptr->next;
    }
    // node unlinked
    ptr = head;
    while (ptr)
    {
        prev = ptr;
        ptr = ptr->next;
        free(ptr->comAddr);
        free(prev);
    }
    ptr = NULL;

}