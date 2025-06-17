#include <stdio.h>

int main() {
    int n;
    int arr[100];
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}