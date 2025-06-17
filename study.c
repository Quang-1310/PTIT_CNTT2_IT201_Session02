#include <stdio.h>
#include <stdlib.h>

int main() {
    // Cap phat bo nho bang malloc
    int *arr = (int *) malloc (5 * sizeof(int));
    if (arr == NULL) {
        printf("khong cap phat duoc bo nho");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    // thay doi kich thuoc o nho
    arr = (int *) realloc(arr, 8 * sizeof(int));
    if (arr == NULL) {
        printf("Khong the tang kich thuoc o nho \n");
        return 1;
    }

    // gan gia tri cho cac o nho vua cap phat moi
    for (int i = 5; i < 8; i++) {
        arr[i] = (i+1)*10;
    }

    for (int i = 0; i < 8; i++) {
        printf("%d\n", arr[i]);
    }
    free(arr);


    // cap phat bo nho bang calloc
    int *arr2 = (int *) calloc(5, sizeof(int));
    if (arr2 = NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr2[i]);
    }

    arr2 = (int *) realloc(arr2, 8 * sizeof(int));
    if (arr2 == NULL) {
        printf("Khong the tan kich thuoc o nho");
        return 1;
    }
    for (int i = 5; i < 8; i++) {
        arr2[i] = (i+2)*10;
    }
    for (int i = 0; i < 8; i++) {
        printf("%d\n", arr2[i]);
    }
    free(arr2);

    return 0;
}