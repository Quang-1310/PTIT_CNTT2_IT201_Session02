#include <stdio.h>

int main() {
    int n;
    int arr[100];
    printf("Moi ban nhap so luong phan tu");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu thu %d", i + 1);
        scanf("%d", &arr[i]);
    }

    int maxNumber = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang la %d", maxNumber);
    return 0;
}