#include<iostream>
#include<time.h>
#include<windows.h>

using namespace std;

int main() {
	while (1) {
		int t = time(NULL) % 86400;
		int hour = t / 3600;
		int minute = t / 60 % 60;
		int second = t % 60;
		cout << hour + 9 << "시 " << minute << "분 " << second << "초" << endl;
		Sleep(1000);
	}
	return 0;
}
