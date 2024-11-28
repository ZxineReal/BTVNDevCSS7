#include<stdio.h>

int main(){
	int num;
	int numb;

	printf("Moi ban nhap vao so luong phan tu cua mang: \n");
	scanf("%d",&num);
	int a[num];
	
	for(int i=0; i<num; i++){
		while(1){
		
		printf("Moi ban nhap vao array[%d] :\n",i+1);
		scanf("%d",&numb);
		
		if(numb%2!=0){
			a[i]=numb;
			break;
		}else{
			printf("Khong phai so le, xin moi nhap lai\n");
		}
		
	}
	}
	for(int i=0;i<num;i++){
		printf("array[%d] : %d\n",i+1,a[i]);
	}

	
}
