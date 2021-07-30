#include <stdio.h>

#define number 8 
int sorted[8]; // 정렬 배열은 반드시 전역변수 -> 불필요한 메모리 최소화

void merge(int a[], int m, int middle, int n) {
	// m : 시작점, middle : 두 배열의 중간, n : 끝점

	int i = m;
	int j = middle + 1; //??
	int k = m; // k는 사실상 i와 같은 위치를 갖기 때문

	// 작은 순서대로 배열에 삽입
	while (i <= middle && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	// 남은 데이터 삽임
	if (i > middle) {
		for (int t = j;t <= n;t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	else {
		for (int t = i;t <= middle;t++) {
			sorted[k] = a[t];
			k++;
		}
	}

	// 실제 배열로
	for (int t = m;t <= n;t++) {
		a[t] = sorted[t];
	}

}


void mergeSort(int a[], int m, int n) {
	if (m < n) {
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	}
}

int main(void) {
	int array[number] = { 7,6,5,8,3,5,9,1 };
	mergeSort(array, 0, number - 1);

	for (int i = 0;i < number;i++) {
		printf("%d ", array[i]);
	}
}