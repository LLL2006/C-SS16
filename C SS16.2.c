#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int x = 12;
	int y = 24;
	
	printf("Truoc khi doi: \n");
	printf("x = %d, y = %d\n", x, y);
	
	swap(&x, &y);
	
	printf("Sau khi doi: \n");
	printf("x = %d, y = %d\n", x, y);
	
	return 0;
}
