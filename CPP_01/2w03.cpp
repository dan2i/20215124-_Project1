//20215124 ����� 03
#include <iostream>
using namespace std;

int main() {
	int n, m;
	int i;
	int sum = 0;
	cout << "���� �� ���� �Է��ϼ���: ";
	cin >> n >> m;
	cout << "n ���� " << n << ", m ���� " << m << "�Դϴ�!" << endl;

	for (i = 1; i <= n; i++) {
		if (i % m == 0) {
			sum += i;
		}
		else
			continue;
	}

	cout << "1���� " << n << "������ " << m << "�� ����� ���� " << sum << endl;

	return 0;
}
