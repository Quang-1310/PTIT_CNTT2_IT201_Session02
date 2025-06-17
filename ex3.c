#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int arrReverse[100];
    int index = 0;
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        arrReverse[index] = arr[i];
        index++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arrReverse[i]);
    }
    return 0;
}