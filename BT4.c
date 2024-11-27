#include<stdio.h>

int main(){
	int number;
	printf("Moi ban nhap so phan tu cua mang: \n");
	scanf("%d",&number);
	
	int a[number];
	for(int i=1; i<=number; i++){
		printf("Moi ban nhap phan tu thu %d cua mang: \n",i);
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=number;i++){
		printf("array[%d] la: %d\n",i,a[i]);
	}
}