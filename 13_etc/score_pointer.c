//score_pointer.c
#include <stdio.h>

void scoreCalc(int(*tmp)[7], int row, int col);
//�迭������ ���� (���� ���� �����ص� ��. �� �ǹ̴� ���� ����� ������ٴ� �Ҹ� but!!! ���� ���� ���� �ȵ�!!!)
void heading();

int main(){
	int score[5][7] = { {78, 90, 61, 65},
                        {70, 10, 61, 65},
                        {78, 30, 51, 65},
                        {78, 70, 71, 75},
                        {28, 10, 91, 55}
                        };

	int row, col, i, j;
	
	row = sizeof(score) / sizeof(score[0]);
	col = sizeof(score[0]) / sizeof(score[0][0]);
	//printf("%d, %d �ٴٴٴ�", row, col);
	heading();
	scoreCalc(score, row, col);

	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++)
			printf("%3d, dndn", score[i][j]);
		printf("\n");
	}

	return 0;
}

void heading(){
	printf("============================================\n");
	printf("����  ���� ���� ���� ���� ��� ���� \n");
	printf("============================================\n");

}

// score �迭�� ��, ���, ������ ���
//scoreCalc(int (*tmp)[4]) //tmp��� �̸����� �ٲٰ� ����.-> �迭������ ����
//�Ʒ��� ���� ��.
void scoreCalc(int(*tmp)[7], int row, int col) //�迭������ ���� (���� ���� �����ص� ��. �� �ǹ̴� ���� ����� ������ٴ� �Ҹ� but!!! ���� ���� ���� �ȵ�!!!)
{
	int i, j;
	
	printf("\n scoreCalc(): %d, %p \n\n", sizeof(tmp), tmp);

	
	/*for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%3d, dndn", tmp[i][j]); 
			//printf("%3d, ", *(*(tmp+i)+j)); // �� ��� ������ ��.
		printf("\n");
		
	}*/

	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			tmp[i][4] += tmp[i][j];
		*(*(tmp + i) + 5) = *(*(tmp + i) + 4) / col;
	}
	for ( i = 0; i < row; i++)
	{
		tmp[i][6] = 1;
		for ( j = 0; j < row; j++)
		{
			if (tmp[i][5]< tmp[j][5])
				tmp[i][6]++;
		}
	}
	 
}