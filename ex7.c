#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Moi ban nhap vao so luong phan tu");
    scanf("%d", &n);
    int* ptr = (int*) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu thu %d ", i + 1);
        scanf("%d", &ptr[i]);
    }
    int sum;
    printf("Moi ban nhap vao tong: ");
    scanf("%d", &sum);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ptr[i] + ptr[j] == sum) {
                printf("%d %d", ptr[i], ptr[j]);
                return 0;
            }
        }
    }
    printf("Khong tim thay");

    return 0;
}