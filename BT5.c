#include<stdio.h>

int main(){
	int num[5]={3,7,4,9,2};
	int max=num[0];
	int min=num[0];
	for(int i=0;i<5;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	for(int i=0;i<5;i++){
		if(num[i]<min){
			min=num[i];
		}
	}
	printf("So lon nhat la: %d\n",max);
	printf("So nho nhat la: %d\n",min);
	
	return 0;
	
}