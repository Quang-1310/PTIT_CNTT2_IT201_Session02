#include <stdio.h>

int main() {
    int n;
    printf("Moi ban nhap vao so phan tu cua mang(0-100): ");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("So luong phan tu khong hop le");
        return 1;
    }
    int arr[100];
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu thu %d ", i + 1);
        scanf("%d", &arr[i]);
    }

    int number;
    printf("Moi ban nhap vao 1 so ");
    scanf("%d", &number);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (number == arr[i]) {
            count++;
        }
    }
    printf("Phan tu %d xuat hien %d lan", number, count);
    return 0;
}