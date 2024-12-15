#include <stdio.h>

int timPhanTu(int *arr, int size, int value) {
	for(int i=0; i < size; i++){
		if(arr[i] == value){
			return i;
		}
	}
	return -1;
}

int main() {
	int arr[] = {12,24,36,48,60};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int tim = 12;
	
	int pos = timPhanTu(arr, size, tim);
	
	if (pos != -1){
		printf("Gia tri %d duoc tim thay tai vi tri: %d\n", tim, pos);
    } else {
        printf("Gia tri %d khong ton tai trong mang\n", tim);
    }
	
	return 0;
}
