#include <stdio.h>

void xoaPhanTu(int *arr, int *size, int position) {
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int main() {
    int array[100] = {10, 20, 30, 40, 50};
    int size = 5; 

    printf("M?ng tru?c khi xóa:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int position = 2;

    xoaPhanTu(array, &size, position);

    printf("M?ng sau khi xóa:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

