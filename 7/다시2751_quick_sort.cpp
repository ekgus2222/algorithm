//N*log(N) 시간복잡도 요구 (백만개라서)
//퀵, 힙, 병합 정렬 사용
//지금은 시간초과 뜸
#include<stdio.h> 

int array[1000001];

void quickSort(int start, int end) {
	if (start >= end) {
		return;
	}
	int key = start, i = start + 1, j = end, temp;
	while (i <= j) {
		while (array[i] <= array[key]) { //
			i++;
		}

		while (array[j] >= array[key] && j > start) { //
			j--;
		}

		
		if (i > j) {
			temp = array[j];
			array[j] = array[key];
			array[key] = temp;
		}
		else {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}	
	}

	quickSort(start, j - 1);
	quickSort(j + 1, end);
}
int main() {
	int number, i;
	scanf("%d", &number);
	
	for (i = 0;i < number;i++) {
		scanf("%d", &array[i]);
	}

	quickSort(0, number - 1);

	for (i = 0;i < number;i++) {
		printf("%d ", array[i]);
	}
}