#include<iostream>

using namespace std;

int main() {
	int _user = 0, win = 0 , games = 0;
	cout << "시작하려면 엔터를 입력해주세요.";
	while ((_user = cin.get()) != EOF) {
		cout << "1-바위, 2-가위, 3-보, EOF-종료 : ";
		cin >> _user;
		int _cpu = rand() % 3 + 1;
		switch (_user) {
		case 1:
			if (_cpu == 1) cout << "비겼습니다." << endl;
			else if (_cpu == 2) {
				cout << "이겼습니다." << endl;
				win++;
			}
			else cout << "졌습니다." << endl;
			break;
		case 2:
			if (_cpu == 1) cout << "졌습니다." << endl;
			else if (_cpu == 2) cout << "비겼습니다." << endl;
			else {
				cout << "이겼습니다." << endl;
				win++;
			}
			break;
		case 3:
			if (_cpu == 1) {
				cout << "이겼습니다." << endl;
				win++;
			} else if (_cpu == 2) cout << "졌습니다." << endl;
			else cout << "비겼습니다." << endl;
			break;
		}
		games++;
	}
	cout << "총 게임수 " << games - 1 << "판, 승리수 " << win << "판" << endl;
	return 0;
}
