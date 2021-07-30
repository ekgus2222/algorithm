
#include<iostream>
#include<algorithm>

using namespace std;

//// ���� 1
//int main(void) {
//	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
//	sort(a, a + 10); // ����, ��
//
//	for (int i = 0;i < 10;i++) {
//		cout << a[i] << ' ';
//	}
//}


//// ���� 2
//bool compare(int a, int b) {
//	// return a < b; // �۾ƾ� true -> ��������
//	return a > b; // Ŀ�� true -> ��������
//}
//
//
//int main(void) {
//	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
//	sort(a, a + 10, compare); // ����, ��
//
//	for (int i = 0;i < 10;i++) {
//		cout << a[i] << ' ';
//	}
//}


// ���� 3 (�ǹ�->������ ��� ����)
class Student {
public:
	string name;
	int score;
	Student(string name, int score) { // ������
		this->name = name;
		this->score = score;
	} 
	
	//���� ������ '������ ���� ����'
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