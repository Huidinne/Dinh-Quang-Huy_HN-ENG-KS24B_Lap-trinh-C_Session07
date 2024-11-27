#include<stdio.h>
int main(){
	int arr[5];
	printf("moi ban nhap lan luot 5 phan tu vao mang: \n");
	for(int i=0; i<5; i++){
		printf("moi ban nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("mang da duoc nhap la: \n");
	for(int i=0; i<5;i++){
		printf("arr[%d]= %d\n",i,arr[i]);
	}
}
