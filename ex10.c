#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int arr2[1000];
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
            printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
        }

        arr2[arr[i]] = 1;
    }
    return 0;
}