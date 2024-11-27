#include<stdio.h>
int main(){
	int array[]={1, 2, 3, 4, 5};
	int count=0;
	for(int i=1; i< sizeof(array)/sizeof(int); i++){
		if(array[i]%2==0){
			printf("so chan trong mang la: %d\n",array[i]);
			count++;
		}
	}
	if(count==0){
		printf("Mang khong chua so chan");
	}
}
