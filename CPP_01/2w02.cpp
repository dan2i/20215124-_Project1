//20215124 02
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main() {
	random_device rd;
	mt19937_64 mersenne(rd());
	uniform_int_distribution<> dice(1, 10);

	int x = dice(mersenne);
	int y = dice(mersenne);
	cout << "��� ������ �ڵ����� �����մϴ�. " << endl;
	cout << x << " " << y << endl;

	char oper;	//operator == ������
	cout << "������ �Է��ϱ�(+, -, *, /)" << endl;
	cin >> oper;

	int answ = 0;
	switch (oper) {
	case '+':
		cout << "��� �Է��ϱ�" << endl;
		cout << x << " + " << y << " = ";
		cin >> answ;
		if (x + y == answ)
			cout << "�����Դϴ�!" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�!" << endl;
		break;
	case '-':
		cout << "��� �Է��ϱ�" << endl;
		cout << x << " - " << y << " = ";
		cin >> answ;
		if (x - y == answ)
			cout << "�����Դϴ�!" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�!" << endl;
		break;
	case '*':
		cout << "��� �Է��ϱ�" << endl;
		cout << x << " * " << y << " = ";
		cin >> answ;
		if (x * y == answ)
			cout << "�����Դϴ�!" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�!" << endl;
		break;
	case '/':
		cout << "��� �Է��ϱ�" << endl;
		cout << x << " / " << y << " = ";
		cin >> answ;
		if (x / y == answ)
			cout << "�����Դϴ�!" << endl;
		else
			cout << "Ʋ�Ƚ��ϴ�!" << endl;
		break;
	}

	return 0;
}
