#include<stdio.h>

int array[3];

int main() {

	int number, i, j, min, index, temp;
	number = 3;
	for (i = 0;i < number;i++) {
		scanf("%d", &array[i]);
	}

	for (i = 0;i < number;i++) {
		min = 1000001;
		for (j = i;j < number;j++) {
			if (min > array[j]) {
				index = j;
				min = array[j];
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (i = 0;i < number;i++) {
		printf("%d ", array[i]);
	}

}