//20215124 김다은 03
#include <iostream>
using namespace std;

int main() {
	int n, m;
	int i;
	int sum = 0;
	cout << "정수 두 개를 입력하세요: ";
	cin >> n >> m;
	cout << "n 값은 " << n << ", m 값은 " << m << "입니다!" << endl;

	for (i = 1; i <= n; i++) {
		if (i % m == 0) {
			sum += i;
		}
		else
			continue;
	}

	cout << "1부터 " << n << "까지의 " << m << "의 배수의 합은 " << sum << endl;

	return 0;
}
