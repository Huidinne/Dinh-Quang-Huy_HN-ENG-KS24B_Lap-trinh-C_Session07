#include<stdio.h>
int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    int i;
    printf("Cac phan tu trong mang:\n");
    for ( i = 0; i < sizeof(array)/sizeof(int); i++) {
        printf("Phan tu thu %d cua mang = %d\n", i, array[i]);
    }
    printf("do dai cua mang: %d\n",i);
}

