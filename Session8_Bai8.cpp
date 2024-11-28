#include <stdio.h>

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;

    printf("Phan tu tren duong cheo phu: ");
    for (int i = 0; i < 3; i++) {
        int duongcheophu = arr[i][3 - i - 1];
        printf("%d ", duongcheophu);
        sum += duongcheophu;
    }   
    printf("\nTong cac phan tu tren duong cheo phu: %d", sum);

    return 0;
}
