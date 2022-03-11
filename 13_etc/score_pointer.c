//score_pointer.c
#include <stdio.h>

void scoreCalc(int(*tmp)[7], int row, int col);
//배열포인터 변수 (앞의 행은 생략해도 됨. 그 의미는 앞의 행수는 상관없다는 소리 but!!! 열은 절대 생략 안됨!!!)
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
	//printf("%d, %d 다다다다", row, col);
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
	printf("국어  영어 수학 과학 총점 평균 석차 \n");
	printf("============================================\n");

}

// score 배열의 합, 평균, 석차를 계산
//scoreCalc(int (*tmp)[4]) //tmp라는 이름으로 바꾸고 싶음.-> 배열포인터 변수
//아래랑 같은 말.
void scoreCalc(int(*tmp)[7], int row, int col) //배열포인터 변수 (앞의 행은 생략해도 됨. 그 의미는 앞의 행수는 상관없다는 소리 but!!! 열은 절대 생략 안됨!!!)
{
	int i, j;
	
	printf("\n scoreCalc(): %d, %p \n\n", sizeof(tmp), tmp);

	
	/*for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%3d, dndn", tmp[i][j]); 
			//printf("%3d, ", *(*(tmp+i)+j)); // 걍 결과 나오는 곳.
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