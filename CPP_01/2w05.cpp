//20215124 05
#include <iostream>
using namespace std;

int main() {
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';

	for (k = 0; k < 9; k++) {
		cout << "(x, y) 좌표: ";
		cin >> x >> y;

		//이미 놓인 자리에 접근 할 수 없도록 하는 코드
		if (board[x][y] != ' ') {
			cout << "다시 입력하세요" << endl;
			k--;
			continue;
		}

		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++) {
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  |  " << board[i][1] << "|  " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;

		//가로 세로 한 줄을 완성하면 끝나도록 하는 탈출 조건
		if ((board[0][y] == 'X') && (board[1][y] == 'X') && (board[2][y] == 'X')) {
			cout << "'X' 플레이어의 우승입니다!" << endl;
			break;
		}

		else if ((board[x][0] == 'X') && (board[x][1] == 'X') && (board[x][2] == 'X')) {
			cout << "'X' 플레이어의 우승입니다! " << endl;
			break;
		}

		else if ((board[0][y] == 'O') && (board[1][y] == 'O') && (board[2][y] == 'O')) {
			cout << "'O' 플레이어의 우승입니다! " << endl;
			break;
		}

		else if ((board[x][0] == 'O') && (board[x][1] == 'O') && (board[x][2] == 'O')) {
			cout << "'O'플레이어의 우승입니다! " << endl;
			break;
		}
	}

	return 0;
}
