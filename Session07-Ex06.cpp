#include<stdio.h>
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	printf("Mang ban dau la: ");
	for(int i = 0;i < 5;i++){
		printf("%d ",arr[i]);
	}
	printf("\nMang moi la: ");
	for(int i = 0;i < 5;i++){
		if (arr[i] % 2 == 0){
			arr[i] = arr[i] + 3;
		}
		else{
			arr[i] = arr[i] + 2;
		}
		printf("%d ",arr[i]);
	}
	
	return 0;
}
