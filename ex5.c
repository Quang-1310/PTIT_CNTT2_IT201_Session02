#include <stdio.h>

int main() {
    int n;
    int arr[100];
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu thu %d", i + 1);
        scanf("%d", &arr[i]);
    }
    int index;
    printf("Moi ban nhap vi tri muon xoa: ");
    scanf("%d", &index);
    if (index < 0 || index > n) {
        printf("Khong hop le");
    }
    else {
        for (int i = index; i < n; i++) {
            arr[i] = arr[i + 1];
        }

        for (int i = 0; i < n - 1; i++) {
            printf("%d", arr[i]);
        }
    }

    return 0;
}