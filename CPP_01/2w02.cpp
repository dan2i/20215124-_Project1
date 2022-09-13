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
	cout << "산수 문제를 자동으로 출제합니다. " << endl;
	cout << x << " " << y << endl;

	char oper;	//operator == 연산자
	cout << "연산자 입력하기(+, -, *, /)" << endl;
	cin >> oper;

	int answ = 0;
	switch (oper) {
	case '+':
		cout << "결과 입력하기" << endl;
		cout << x << " + " << y << " = ";
		cin >> answ;
		if (x + y == answ)
			cout << "정답입니다!" << endl;
		else
			cout << "틀렸습니다!" << endl;
		break;
	case '-':
		cout << "결과 입력하기" << endl;
		cout << x << " - " << y << " = ";
		cin >> answ;
		if (x - y == answ)
			cout << "정답입니다!" << endl;
		else
			cout << "틀렸습니다!" << endl;
		break;
	case '*':
		cout << "결과 입력하기" << endl;
		cout << x << " * " << y << " = ";
		cin >> answ;
		if (x * y == answ)
			cout << "정답입니다!" << endl;
		else
			cout << "틀렸습니다!" << endl;
		break;
	case '/':
		cout << "결과 입력하기" << endl;
		cout << x << " / " << y << " = ";
		cin >> answ;
		if (x / y == answ)
			cout << "정답입니다!" << endl;
		else
			cout << "틀렸습니다!" << endl;
		break;
	}

	return 0;
}
