#include <iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

/*
//quiz1
int main()
{
	int num;
	int num1;
	int num2;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		num1 = num - i;
		for (int j=1; j <= num1; j++) {
			cout << " ";
		}
		num2 = 2 * i - 1;
		for (int k = 1; k <= num2; k++)
			cout << "*";
		cout << "\n";
	}
	for (int i = num-1; i >= 1; i--) {
		num1 = i;
		for (int j = num-1; j >= num1; j--) {
			cout << " ";
		}
		num2 = 2 * i - 1;
		for (int k = 1; k <= num2; k++)
			cout << "*";
		cout << "\n";
	}





	return 0;
}
*/


/*
//quiz 2
int main() {
	int num;
	int num1=1;
	cout << "Please enter an integer :";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		num1 = num1*i;
	}
	cout << num <<"! = " << num1;






	return 0;
}
*/


/*
//quiz 3
int main() {
	int num1, num2, num3, num4, count;
	cout << "input N, M : ";
	cin >> num1 >> num2;
	num4 = num2;
	count = 1;
	while(1){
		for (int i = 1; i <= 9; i++) {
				for(int j=count; j<=num2; j++){

					cout << j << setw(2) << "X" <<setw(2)<< i << " =" <<setw(3)<<i * j<<"\t";
					if (j >= num1) 
						break;
			
				}
				cout << "\n";
			
		}
		count = num2+1;
		
		if (num1 <= num2)
			break;
		cout << "\n";
		num2 = num2 + num4;
	}
	return 0;
}
*/



/*
//quiz 4
int main() {
	int num1, num2;
	int total = 0;
	cin >> num1 >> num2;
	for (int i = 1; i <= 100; i++) {
		if (i % num1 == 0 || i % num2 == 0){
			cout << setw(4) << i;
			total++;
			if (total % 5 == 0)
				cout << "\n";
		}
	}
	cout << "\n" << "total : " << total;


	return 0;
}
*/


/*
//quiz5
int main(){
	int m = 0;
	int j = 0;
	char ch;
	while ((ch = cin.get())!=EOF) {
		switch (ch){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'u':
		case 'U':
			++m;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			++j;
			break;
		}
	}
	cout << "모음:" << m << endl;
	cout << "자음:" << j << endl;

	return 0;
}
*/
