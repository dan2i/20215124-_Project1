//20215124 04
#include <iostream>
using namespace std;

int main() {
	int num, i = 1;
	int sum = 0;

	cout << "������ �Է��ϼ���: ";
	cin >> num;

	cout << i;
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << " + " << i;
			sum += i;
		}
		else
			continue;
	}
	cout << " = " << sum << endl;

	return 0;
}