#include <stdio.h>
int main(){
    int e;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &e);
    int array[e];
    printf("Nhap cac phan tu cua mang (chi nhap so le):\n");
    for (int i = 0; i < e; i++){
        do {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &array[i]);
            if(array[i] % 2 == 0){
                printf("Gia tri khong hop le! Vui long nhap lai so le.\n");
            }
        }while(array[i] % 2 == 0);
    }
}

