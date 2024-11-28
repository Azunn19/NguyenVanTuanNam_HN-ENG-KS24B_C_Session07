#include<stdio.h>
int main(){
	int a, b;
	printf("Hay nhap so hang cua mang: ");
	scanf("%d", &a);
	printf("Hay nhap so cot cua mang: ");
	scanf("%d", &b);
	int arr[a][b];
	if (a <= 0 && b <= 0){
		printf("Du lieu nhap vao khong hop le");
	}
	else{
		for (int i = 0;i < a;i++){
			for (int j = 0;j < b;j++){
				printf("Hay nhap phan tu thu %d cot %d: ", i+1, j+1);
				scanf("%d",&arr[i][j]);
			}
		}
		printf("Mang vua nhap theo dang ma tran la:\n");
		for (int i = 0;i < a;i++){
			for (int j = 0;j < b;j++){
				printf("%d  ",arr[i][j]);
			}
			printf("\n\n");
		}
	}
	
	return 0;
}
