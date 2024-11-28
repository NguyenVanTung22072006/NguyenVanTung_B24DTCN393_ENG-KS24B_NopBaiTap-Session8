#include<stdio.h>

int main(){
	int m, n;
	
	printf("Moi nhap so hang: ");
	scanf("%d", &m);
	printf("Moi nhap so cot: ");
	scanf("%d", &n);
	
	int arr[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("Nhap phan tu trong ham thu %d, cot %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
    for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("Phan tu hang thu %d, cot %d = %d", i+1, j+1);
        }
        printf("\n");
    }
    return 0;
}
  
