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
        printf("Hay nhap cac phan tu cua mang(chi so le):\n");
        for (int i = 0; i < n; i++) {
            while (1) {
                printf("Phan tu [%d]: ", i);
                scanf("%d", &arr[i]);
                if (arr[i] % 2 != 0) {
                    break;
                }
                printf("Gia tri phai la so le. Hay nhap lai\n");
            }
        }
        printf("Cac phan tu trong mang la: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
	}

    return 0;
}
