//malloc1.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* ptr;

	while (1)
	{

		ptr = (char*)malloc(100);
		if (ptr == NULL)
		{
			perror("Error");
			exit(1);
		}

		printf("input string?");
		gets(ptr);
		if (strcmp(ptr, "end") == 0)
			break;
		printf("%p, %s \n", ptr, ptr);
		 
		//free(ptr);
		//printf("%p, %s \n", ptr, ptr);// �� �̻� ������ �ȵǼ� �ȵ�.
		//free(ptr);
	}
	free(ptr);  
	ptr = NULL;

	return 0;
}