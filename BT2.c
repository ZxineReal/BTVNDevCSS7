#include<stdio.h>

int main(){
	int num[5];
	
	for(int i=1;i<=5;i++){
		printf("Moi ban nhap vao phan tu thu %d cua mang: ",i);
		scanf("%d",&num[i]);
	}
	for(int i=1;i<=5;i++){
		printf("Phan tu thu %d cua mang la: %d\n",i,num[i]);
	}
	return 0;
}