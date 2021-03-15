#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main() {
	int val, arr[10] = {0}, n=0;
	srand(clock());
	while (n < 16) {
		val = rand() % 10;
		arr[val] = arr[val] + 1;
		n++;
	}
	printf("0 go in = %d\n 1 go in = %d\n 2 go in = %d\n 3 go in = %d\n 4 go in = %d\n 5 go in = %d\n 6 go in = %d\n 7 go in = %d\n 8 go in = %d\n 9 go in = %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
}