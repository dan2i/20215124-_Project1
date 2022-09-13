//20215124 01
#include <iostream>
using namespace std;

int main() {
	char eng;
	int cons = 0;	// 자음
	int vowel = 0;	//모음


	while (1) {
		cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;
		cin >> eng;

		if (cin.eof()) {
			cout << "모음: " << vowel << endl;
			cout << "자음: " << cons << endl;
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