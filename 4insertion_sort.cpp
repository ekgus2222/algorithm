#include <stdio.h>

int main() {
	int i, j, temp,m;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	//j+1이 cursor
	for (i = 0;i < 9;i++) {
		j = i;
		while (array[j] > array[j + 1]) { //array[j+1]이 array[j]보다 크다면 정지
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
		
		
	}

	for (i = 0;i < 10;i++) {
		printf("%d ", array[i]);
	}

	return 0;
}