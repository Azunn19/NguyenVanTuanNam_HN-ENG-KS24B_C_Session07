#include <stdio.h>
int main() {
    int arr[5];
    int count = 0;
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
    	if(arr[i]%2 == 0){
    		printf("%d la so chan\n", arr[i]);
    		count++;
		}
    }
    if(count == 0){
	    printf("Mang khong chua so chan");
	}

    return 0;
}
