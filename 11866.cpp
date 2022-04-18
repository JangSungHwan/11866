#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int n, k;
	cout << "요세푸스 순열 숫자 입력 (N,K)\n";
	scanf("%d %d", &n, &k);

	queue<int> q;

	for (int i=0; i < n; i++) {
		q.push(i+1);
	}

	while (!q.empty()) {
		for (int i = 0; i < k-1; i++) {
			int num = q.front();
			q.pop();
			q.push(num);
		}
		cout << q.front() << ' ';
		q.pop();
	}
}
