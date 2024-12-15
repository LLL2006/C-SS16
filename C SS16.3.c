#include <stdio.h>

void tinhTong(int a, int b, int *tong) {
	*tong = a + b;
}

int main() {
	int n1 = 12;
	int n2 = 24;
	int sum = 0;
	
	tinhTong(n1, n2, &sum);
	
	printf("Tong cua 2 gia tri la: %d\n", sum);
	
	return 0;
}
