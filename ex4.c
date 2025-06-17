#include <stdio.h>

int main() {
    int n;
    int arr[100];
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan thu %d", i + 1);
        scanf("%d", &arr[i]);
    }
    int index;
    printf("Moi ban nhap vi tri muon sua: ");
    scanf("%d", &index);
    int number;
    printf("Moi ban nhap so moi: ");
    scanf("%d", &number);
    if (index < 0 || index > sizeof(arr) / sizeof(int)) {
        printf("Vi tri khong hop le");
    }
    else {
        arr[index - 1] = number;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}