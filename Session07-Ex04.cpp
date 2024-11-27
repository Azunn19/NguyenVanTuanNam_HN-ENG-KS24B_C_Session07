#include <stdio.h>
int main() {
    int n;
    printf("Hay nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So phan tu khong hop le\n");
    }
    else{
    	int arr[n];
        printf("Hay nhap cac phan tu cua mang:\n");
        for (int i = 0; i < n; i++) {
            printf("Phan tu [%d]: ", i);
            scanf("%d", &arr[i]);
        }
        printf("Cac phan tu cua mang la: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
	}
    return 0;
}
