#include <stdio.h>

//재귀함수 사용
int number = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quickSort(int* data, int start, int end) {
	if (start >= end) { // 원소가 1개인 경우
		return;
	}

	int key = start; // pivot
	int i = start + 1; // 왼쪽 출발 지점
	int j = end; // 오른쪽 출발 지점
	int temp; // 값 교환

	//오름차순
	while (i <= j) { // 엇갈릴 때까지 
		while (data[i] <= data[key]) { // 왼->오
			i++;
		}
		while (data[j] >= data[key] && j > start) { // 오->왼 // key와 change 되므로 범위제한
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}


	////내림차순
	//while (i <= j) { // 엇갈릴 때까지 
	//	while (data[i] >= data[key]) { // 왼->오
	//		i++;
	//	}
	//	while (data[j] <= data[key] && j > start) { // 오->왼 // key와 change 되므로 범위제한
	//		j--;
	//	}
	//	if (i > j) {
	//		temp = data[j];
	//		data[j] = data[key];
	//		data[key] = temp;
	//	}
	//	else {
	//		temp = data[j];
	//		data[j] = data[i];
	//		data[i] = temp;
	//	}
	//}

	quickSort(data, start, j - 1); // 왼쪽
	quickSort(data, j + 1, end); // 오른쪽

}
int main() {
	quickSort(data, 0, number - 1);

	for (int i = 0;i < number;i++) {
		printf("%d ", data[i]);
	}
}
