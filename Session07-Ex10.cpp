#include<stdio.h>
int main(){
	int n;
	printf("Hay nhap so phan tu cua mang: ");
	scanf("%d",&n);
	if (n <= 0){
		printf("So phan tu khong hop le");
	}
	else{
		int arr[n];
		printf("Hay nhap cac phan tu cua mang:\n");
		for (int i = 0;i < n;i++){
            printf("Phan tu [%d]: ", i);
            scanf("%d", &arr[i]);
		}
		printf("\nCac phan tu la so nguyen to la: ");
		for (int i = 0;i < n;i++){
			int count = 0;
			for (int a = 1;a <= arr[i];a++){
				if (arr[i] % a == 0){
					count++;
				}
			}
			if (count == 2){
				printf("%d ",arr[i]);
			}
		}
	}
	
	return 0;
}
