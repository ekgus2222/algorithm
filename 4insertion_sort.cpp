#include <stdio.h>

int main() {
	int i, j, temp,m;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	//j+1�� cursor
	for (i = 0;i < 9;i++) {
		j = i;
		while (array[j] > array[j + 1]) { //array[j+1]�� array[j]���� ũ�ٸ� ����
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