#include <stdio.h>

void capNhatMang(int *arr, int newValue, int pos) {
	arr[pos] = newValue;
}

int main() {
	int arr[] = {12,24,36,48,60};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("Mang ban dau: \n");
	for(int i = 0; i < size ; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	int newValue =25;
	int pos=2;
	
	capNhatMang(arr, newValue, pos);
	
	printf("Mang sau khi cap nhat: \n");
	for(int i = 0; i < size ; i++) {
		printf("arr[%d] = %d \n", i, arr[i]);
	}
	
	return 0;
}

