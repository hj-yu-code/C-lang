#include <stdio.h>

int main(int argc, char*argv[])
{
	int i;
	printf("argc: %d  \n", argc);

	for ( i = 0; i < argc; i++)
		printf("%p: %s  \n", argv[i], argv[i]);
	

	return 0;
}