//20215124 01
#include <iostream>
using namespace std;

int main() {
	char eng;
	int cons = 0;	// ����
	int vowel = 0;	//����


	while (1) {
		cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;
		cin >> eng;

		if (cin.eof()) {
			cout << "����: " << vowel << endl;
			cout << "����: " << cons << endl;
			break;
		}

		switch (eng) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			vowel++;
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			[[fallthrough]];
			cout << "check to alphabet" << endl;
			break;
		default:
			cons++;
			break;
		}
	}

	return 0;
}