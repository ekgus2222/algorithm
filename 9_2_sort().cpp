// ���ڵ�
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//// ���� 1 (pair ���)
//int main(void) {
//	vector<pair<int, string>> v;
//	v.push_back(pair<int, string>(98, "������"));
//	v.push_back(pair<int, string>(85, "���ѿ�"));
//	v.push_back(pair<int, string>(95, "�����"));
//
//	sort(v.begin(), v.end()); //cmp �Լ� ���� �̷��� ���ָ� first�� �������� ���ĵ�
//	
//	for (int i = 0;i < v.size();i++) {
//		cout << v[i].second << ' ';
//	}
//}

// ���� 2 (���� pair ���) 
bool compare(pair<string, pair<int, int>>a,
			 pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first) { // ���� ����
		return a.second.second > b.second.second; // � ����
	}
	else {
		return a.second.first > b.second.first;
	}
}
int main(void) {
	vector<pair<string, pair<int, int>>> v;
	v.push_back(pair<string, pair<int, int>>("������", pair<int,int>(90,20000527)));
	v.push_back(pair<string, pair<int, int>>("���ѿ�", pair<int, int>(85, 19820829)));
	v.push_back(pair<string, pair<int, int>>("�����", pair<int, int>(90, 20000512)));

	sort(v.begin(), v.end(),compare); //cmp �Լ� ���� �̷��� ���ָ� first�� �������� ���ĵ�
	
	for (int i = 0;i < v.size();i++) {
		cout << v[i].first << ' ';
	}
}

// ���� ������ 3���� �Ѿ�� pair�� �� ������ ���� ����