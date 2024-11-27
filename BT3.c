#include<stdio.h>

int main(){
	int num[5]={2,7,5,9,1};
	int count = 1;
	
	for(int i=0; i<sizeof(num)/sizeof(num[0]); i++){
		if(num[i]%2==0){
			count++;
			printf("So chan la: %d\n",num[i]);
			
		}
	}	
	if(count==1){
		printf("Khong co so chan nao");
	
	}
}

	