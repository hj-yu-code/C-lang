#include <stdio.h>

int main()
{
	char ch;
	short int n1;
	int n2;
	long int n3; 
	float fnum;
	double dnum;

    printf("input char ? ");
	scanf(" %c", &ch); //���������� : �Է¹����� space, [enter], tab�� ������

	printf("input short int ? ");
	scanf("%hd", &n1);

	printf("input  int ? ");
	scanf("%d", &n2);

	printf("input long  int ? ");
	scanf("%ld", &n3);
	
    printf("input float ? ");
	scanf("%f", &fnum);

    printf("input double ? ");
	scanf("%lf", &dnum);

	printf("%c, %hd, %d, %ld, %f,  %lf \n",
		              ch, n1, n2, n3, fnum, dnum );

	return 0 ;
}
