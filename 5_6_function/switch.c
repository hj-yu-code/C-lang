//switch1.c
#include <stdio.h>

int main()
{
	int choice, stop=1;

	while (stop) 
	{
		printf("\n1. ������� �Է� \n");
		printf("2. ������� ��� \n");
		printf("3. ������� �˻� \n");
		printf("4. ���α׷� ���� \n");
		printf("Select ? (1~4) ");
		scanf("%d%*c", &choice);  //1, 3, 7,.. 4, a, sample, ���ڹ迭

		switch (choice)
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: stop = 0;
			break;
		}

		// while (getchar() != '\n');

	} //while(stop) end

	printf("End.\n");

	return 0;
}

emp_input()
{
	printf("������� �Է��Լ�. \n");
}

emp_output()
{
	printf("������� ����Լ�. \n");
}

emp_find()
{
	printf("������� �˻��Լ�. \n");
}