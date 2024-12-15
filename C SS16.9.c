#include <stdio.h>

void themPhanTu(int *arr, int *size, int newValue, int position) {
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = newValue;

    (*size)++;
}

int main() {
    int array[100] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Mang truoc khi them:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int newValue = 12;
    int position = 1;


    themPhanTu(array, &size, newValue, position);

    printf("Mang sau khi them:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

