#include <stdio.h>

void sapXep(int *arr, int size){
	for(int i =0;i < size -1; i++){
		for(int j= i + 1; j<size; j++){
			if( arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int arr[] = {50, 20, 40, 10, 30};
	int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sapXep(arr, size);

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
