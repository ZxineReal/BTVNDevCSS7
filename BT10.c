#include<stdio.h>

int main(){

	
	int n2;
    printf("Nhap so phan tu cua mang:\n ");
    scanf("%d", &n2);
    int arr5[n2];
    printf("Nhap %d phan tu cho mang:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr5[i]);
    }
    for (int i = 0; i < n2; i++){
    		if (arr5[i]==1 || arr5[i]==2){
    			printf("%d la so nguyen to\n",arr5[i]);
			}
    	for (int o = 2; o < arr5[i]; o++){
    		if (arr5[i] % o == 0){
    			printf("%d la ko phai so nguyen to\n",arr5[i]);
    			break;
			}else{
				printf("%d la so nguyen to\n",arr5[i]);
				break;
			}
		}
	}
    
    return 0;
}
