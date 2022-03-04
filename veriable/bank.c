#include <stdio.h>
#include <stdlib.h> // exit�Լ� �ִ� ��

// int balance=0; //��������
int deposit(int balance);
int whitdraw(int balance);
void balanceOutput(int balance);


int main()
{
    static int balance=0; //��������
    int choice;
    
    while(1)
	{
		printf("\n1) �Ա� \n");
		printf("2) ��� \n");
		printf("3) �ܰ���ȸ \n");
		printf("4) ���� \n");

	   do{
		  printf("   �����ϼ��� ?(1~4) ");
		  scanf("%d", &choice);
	   }while(choice<1 || choice>4);

		switch(choice)
		{
            case 1 : balance = deposit(balance);
						break;
            case 2 : balance = whitdraw(balance);
						break;
            case 3 : balanceOutput(balance);
						break;
			case 4 : puts("���α׷��� �����մϴ� ");
						exit(0);
		}
   }

	return 0;
}

int deposit(int balance)
{
   int money;

	printf("\n�Ա��� �ݾ��� ? ");
	scanf("%d", &money);

	balance += money;
    return balance;
}

int whitdraw(int balance)
{
   int money;

	printf("\n����� �ݾ��� ? ");
	scanf("%d", &money);

    if(balance >= money){
	    balance -= money;
    }
    else{
        printf("�ܾ׺���! �����ܰ�: %d\n", balance);
    }
    
    return balance;
}

void balanceOutput(int balance)
{
   printf("���� �ܰ��� : %d �Դϴ�. \n", balance);
}