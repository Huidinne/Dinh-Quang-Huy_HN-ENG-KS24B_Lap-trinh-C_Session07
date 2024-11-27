#include<stdio.h>
int main(){
	int array[]={1,2,3,4,5};
	for(int i=0; i<sizeof(array)/sizeof(int);i++){
		if(array[i]%2==0){
			array[i]+=3;
		}else{
			array[i]+=2;
		}
	}
	for(int i=0; i<sizeof(array)/sizeof(int);i++){
		printf("%d,",array[i]);
	}
}
