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
	
	for(int i=0; i<n; i++){
		printf("\nBien tren cung %d", arr[0][i]);
	}
	printf("\n");
	for(int i=0; i<n; i++){
		printf("\nBien duoi cung %d", arr[m-1][i]);
	}
	printf("\n");
	for(int i=0; i<m; i++){
		printf("\nBien phai %d", arr[i][0]);
	}
	printf("\n");
	for(int i=0; i<m; i++){
		printf("\nBien trai %d", arr[i][m-1]);
    }

	return 0;
}
