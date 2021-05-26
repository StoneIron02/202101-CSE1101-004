#include<iostream>

using namespace std;

int pie = 3.14;

int rectangle(int len, int h) {
	return len * h;
}
float circle(int r) {
	return r * r * pie;
}
float triangle(float edge, float height) {
	return edge * height / 2;
}

int main() {
	int check, num1, num2;
	float edge, height;
	cout << "please select shape 1-rectangle, 2-circle, 3-triangle : ";
	cin >> check;

	switch (check) {
	case 1:
		cout << "you are selected rectangle, please input two integer for length and height : ";
		cin >> num1 >> num2;
		cout << "the area is : " << rectangle(num1, num2);
		break;
	case 2:
		cout << "you are selected circle, please input one integer for radius : ";
		cin >> num1;
		cout << "the area is : " << circle(num1);
		break;
	case 3:
		cout << "you are selected triangle, please input two float for edge and height : ";
		cin >> edge >> height;
		cout << "the area is : " << triangle(edge, height);
		break;
	}
	return 0;
}
