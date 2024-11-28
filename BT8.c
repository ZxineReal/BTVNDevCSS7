#include<stdio.h>

int main(){
	int row,col;
	printf("Moi ban nhap vao so dong cua mang:\n");
	scanf("%d",&row);
	printf("Moi ban nhap vao so cot cua mang:\n");
	scanf("%d",&col);
	
	int array[row][col];
	
	for(int i=0;i<row;i++){
		for(int j=0; j<col;j++){
			printf("Moi ban nhap phan tu dong %d cot %d: \n",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
	printf("Cac phan tu trong mang la:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("array[%d][%d]: %d\t",i,j,array[i][j]);
		}
			printf("\n");
	}
}