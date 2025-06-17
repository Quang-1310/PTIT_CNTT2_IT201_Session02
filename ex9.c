#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int arr2[1000];
    int maxCount = 0;
    int maxItem = 0;
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        if (arr2[arr[i]] == 1) {
            continue;
        }
        else {
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count > maxCount) {
                maxCount = count;
                maxItem = arr[i];
            }
        }

        arr2[arr[i]] = 1;
    }
    printf("Phan tu co so lan xuat hien lon nhat la: %d", maxItem);
    return 0;
}