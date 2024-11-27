#include<stdio.h>

int main(){
	int a[5]={1,2,3,5,6};
	
	for(int i = 1; i<=5; i++){
		printf("Array[%d] la: %d\n",i,a[i]);
	}
	printf("Do dai cua mang la: %d\n",sizeof(a)/sizeof(a[0]));
	
	return 0;
}