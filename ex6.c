#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Moi ban nhap vao so luong phan tu");
    scanf("%d", &n);
    int* ptr = (int*) malloc (n + 1 * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu thu %d ", i + 1);
        scanf("%d", &ptr[i]);
    }
    int index;
    printf("Moi ban nhap vi tri muon them: ");
    scanf("%d", &index);
    int number;
    printf("Moi ban nhap gia tri moi");
    scanf("%d", &number);
    for (int i = n; i > index; i--) {
        ptr[i] = ptr[i-1];
    }
    ptr[index] = number;
    for (int i = 0; i < n + 1; i++) {
        printf("%d", ptr[i]);
    }
    return 0;
}