// 숏코딩
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//// 예제 1 (pair 사용)
//int main(void) {
//	vector<pair<int, string>> v;
//	v.push_back(pair<int, string>(98, "고은영"));
//	v.push_back(pair<int, string>(85, "박한울"));
//	v.push_back(pair<int, string>(95, "김다현"));
//
//	sort(v.begin(), v.end()); //cmp 함수 없이 이렇게 해주면 first를 기준으로 정렬됨
//	
//	for (int i = 0;i < v.size();i++) {
//		cout << v[i].second << ' ';
//	}
//}

// 예제 2 (이중 pair 사용) 
bool compare(pair<string, pair<int, int>>a,
			 pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first) { // 성적 같음
		return a.second.second > b.second.second; // 어린 순서
	}
	else {
		return a.second.first > b.second.first;
	}
}
int main(void) {
	vector<pair<string, pair<int, int>>> v;
	v.push_back(pair<string, pair<int, int>>("고은영", pair<int,int>(90,20000527)));
	v.push_back(pair<string, pair<int, int>>("박한울", pair<int, int>(85, 19820829)));
	v.push_back(pair<string, pair<int, int>>("김다현", pair<int, int>(90, 20000512)));

	sort(v.begin(), v.end(),compare); //cmp 함수 없이 이렇게 해주면 first를 기준으로 정렬됨
	
	for (int i = 0;i < v.size();i++) {
		cout << v[i].first << ' ';
	}
}

// 정렬 기준이 3개가 넘어가면 pair가 더 복잡할 수도 있음