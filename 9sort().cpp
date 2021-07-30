
#include<iostream>
#include<algorithm>

using namespace std;

//// 예제 1
//int main(void) {
//	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
//	sort(a, a + 10); // 시작, 끝
//
//	for (int i = 0;i < 10;i++) {
//		cout << a[i] << ' ';
//	}
//}


//// 예제 2
//bool compare(int a, int b) {
//	// return a < b; // 작아야 true -> 오름차순
//	return a > b; // 커야 true -> 내림차순
//}
//
//
//int main(void) {
//	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
//	sort(a, a + 10, compare); // 시작, 끝
//
//	for (int i = 0;i < 10;i++) {
//		cout << a[i] << ' ';
//	}
//}


// 예제 3 (실무->데이터 묶어서 정렬)
class Student {
public:
	string name;
	int score;
	Student(string name, int score) { // 생성자
		this->name = name;
		this->score = score;
	} 
	
	//정렬 기준은 '점수가 작은 순서'
	bool operator <(Student& student) {
		return this->score < student.score;
	}
};


int main(void) {
	Student students[] = {
		Student("1",90),
		Student("2",93),
		Student("3",97),
		Student("4",87),
		Student("5",92)
	};

	sort(students, students + 5);


	for (int i = 0;i < 5;i++) {
		cout << students[i].name << ' ';
	}
}