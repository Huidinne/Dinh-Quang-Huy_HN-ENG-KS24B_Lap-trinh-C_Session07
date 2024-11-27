#include<stdio.h>
int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int max = array[0];
    int min = array[0];
    for(int i = 1; i < 5; i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);
}

