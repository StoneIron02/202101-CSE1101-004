/* #include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        gcd(b, a % b);
    }
}

int main() 
{
	int a, b;
	cout << "Enter any two numbers to find GCD: ";
	cin >> a >> b;
	cout << "두 수의 최대공약수는 : " << gcd(a, b) << " 입니다" << endl;

}
*/