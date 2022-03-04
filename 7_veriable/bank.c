#include <stdio.h>
#include <stdlib.h> // exit함수 있는 곳

// int balance=0; //전역변수
int deposit(int balance);
int whitdraw(int balance);
void balanceOutput(int balance);


int main()
{
    static int balance=0; //지역변수
    int choice;
    
    while(1)
	{
		printf("\n1) 입금 \n");
		printf("2) 출금 \n");
		printf("3) 잔고조회 \n");
		printf("4) 종료 \n");

	   do{
		  printf("   선택하세요 ?(1~4) ");
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
			case 4 : puts("프로그램을 종료합니다 ");
						exit(0);
		}
   }

	return 0;
}

int deposit(int balance)
{
   int money;

	printf("\n입금할 금액은 ? ");
	scanf("%d", &money);

	balance += money;
    return balance;
}

int whitdraw(int balance)
{
   int money;

	printf("\n출금할 금액은 ? ");
	scanf("%d", &money);

    if(balance >= money){
	    balance -= money;
    }
    else{
        printf("잔액부족! 현재잔고: %d\n", balance);
    }
    
    return balance;
}

void balanceOutput(int balance)
{
   printf("현재 잔고는 : %d 입니다. \n", balance);
}
