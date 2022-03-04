#include <stdio.h>

int main(){
    int num[5]= {10, 20, 30, 40, 50};
    int i;
    int sum = 0;
    int max, min;

    num[0] = 100;
    printf("%d, %p, %p \n", num[0], &num[0], &num);
    printf("%d, %d \n", sizeof(num[0]), sizeof(num)); // 4, 20(4*5)

    for(i=0;i<5;i++){
        printf("input: ");
        // scanf("%d", &num[0]+(i) );
        scanf("%d", &num[i] );
    }
    printf("\n");

    for(i=0;i<5;i++){
        printf("%d, %p \n", num[i], &num[i]);
        sum += num[i];
    }
    max = num[0];
    min = num[0];
    for (i=1; i<5; i++){
        if(max<num[i]) max = num[i];
        if(min>num[i]) min = num[i];
    }
    printf("\n");
    printf("Че: %d, ЦђБе: %.2f \n", sum, (float)sum/i);
    printf("max: %d, min: %d \n", max, min);

    return 0;
}