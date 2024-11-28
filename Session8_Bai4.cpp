#include <stdio.h>

int main() {
    int array[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int max = array[0][0]; 
    for (int i=0; i<3; i++) {
        for (int j = 0; j <4; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    printf("Phan tu lon nhat la: %d", max);

    return 0;
}
