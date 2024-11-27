#include <stdio.h>
int main() {
    int arr[5];
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang vua nhap la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
