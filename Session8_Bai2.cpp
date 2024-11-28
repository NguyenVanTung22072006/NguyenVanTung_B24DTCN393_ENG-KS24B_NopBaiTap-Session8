#include <stdio.h>

int main(){
    int arr[]={1,5,2,3,23,5,1,2};
    int key;
    int n=0; 
    
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &key);
    for (int i=0; i< sizeof(arr)/sizeof(arr[0]); i++){
        if (arr[i] == key) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            n=1;
        }
    }
    if (!n) {
        printf("Phan tu khong ton tai trong mang");
    }

    return 0;
}
