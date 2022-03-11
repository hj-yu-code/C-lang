// pointer6.c
#include <stdio.h>
//포인터 자료형
//- 포인터 변수(주소를 받는 변수)
//- 배열 포인터
//- 포인터 배열
//- 다중 포인터
//- 함수포인터
//- void형 포인터
//
//포인터와 자료형이 다르다는 뜻
//	: 포인터 변수에 저장할 메모리의 주소가 타입(대상)이 다르다는 뜻.
//	(포인터 선언문, 주소를 가져오는 방법이 다름.주소를 사용하는 방법이 다름.)



int main()
{
	int count[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i, j;
	int(*ptr)[3];//배열포인터 변수

	printf("%d, %d, %d  \n", sizeof(count), sizeof(count[0]), sizeof(count[0][0]));
	printf("%p, %p, %p, %d \n", count, count[0], &count[0][0], count[0][0]);
									//앞의 3개는 주소

	for ( i = 0; i < 4; i++)
	{
		for ( j = 0; j <3; j++)
		
		//	printf("%p, %3d, ", *(count + i) + j, *(*(count + i) + j));
		printf("%p, %3d, ", &count[i][j], count[i][j]);
			printf("\n");
		
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%p, %3d, ", *(count + i) + j, *(*(count + i) + j)); //둘다 행은 그대로인데 열이 달라짐.
		printf("\n");

	}

	ptr = count;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		
			printf("%p, %3d, ", (*ptr), *((*ptr)+j));
		ptr++;
			printf("\n");
		
	}
	printf("\n");

	ptr = count;


	return 0;
}
