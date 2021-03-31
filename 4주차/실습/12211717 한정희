//퀴즈 1
/*#include <iostream>

using namespace std;
int main() {
	int num, i, j;

	cin >> num;
	j = num;

	//*이 늘어나는 부분(삼각형)
	while (j >= 0) {
		for (i = 0; i <= j; i++) { //j+1개만큼 공백 넣어서 별 위치 맞추기
			cout << " ";
		}
		
			/*
			1=1+0
			3=2+1
			5=3+2
			7=4+3
			이런식으로 홀수를 쪼개면 i를 증감시키는게 쉽겠겠다고 생각해서 for문 두개로 나눠서 출력
			*/
		
		for (i = num - j; i > 0; i--) {
			cout << "*";
		}
		for (i = 2; i < num - j + 1; i++) {
			cout << "*";
		}
		cout << "\n";
		j--;
	}

	j = 1;

	//별이 감소하는 부분(역삼각형)
	while (j <= num) {
		for (i = 1; i <= j; i++) {
			cout << " ";
		}
		for (i = num; i >= j; i--) {
			cout << "*";
		}
		for (i = 1; i < num - j + 1; i++) {
			cout << "*";
		}
		cout << "\n";
		j++;
	}

	return 0;
}
*/

/*
//퀴즈 2
#include <iostream>

using namespace std;
int main() {
	int num, i, fac{1};
	cin >> num;

	for (i = 1; i <= num; i++) {
		fac *= i;
	}
	cout << num << "! = " << fac;
	return 0;
}
*/

//퀴즈 3
/*#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n, m;
	int e{ 0 }, j{ 1 };

	cout << "Input N, M : ";
	cin >> n >> m;

	while (e * m < n) { //e는 전체 묶음(1-n단까지 출력한 것을 한묶음이라고 생각했음) 기준 줄바꿈 횟수
		for (int i = 1; i <= n; i++) { //세로줄을 n줄만큼 출력
			for (j = 1; j <= m; j++) { //가로줄을 m개만큼 출력
				if ((j + e * m) > n) //x*y에서 x=j+e*m이라는 규칙이 있고, n단만큼만 출력되어야 하니까 둘이 같으면 가로줄 그만 늘리고 for문 빠져나오는걸로
					break;
				cout << (j + e * m) << " × " << i << " = " << (j + e * m) * i << setw(3) << "\t"; //setw 쓰니까 모양이 이상해서 \t도 같이 썼음
			}
			cout << endl; //한묶음 다 출력하면 한칸 더 줄바꿈해줌
		}
		cout << endl;
		e++; //한묶음 다 출력하면 e에 1더해줌

	}

	return 0;
}
*/



//퀴즈 4
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int i, num1, num2, num3{ 0 }, counter{ 0 };

	cin >> num1 >> num2;

	//만약 num2가 num1보다 크면 두 수를 바꿔줌
	if (num1 > num2) {
		num3 = num1;
		num1 = num2;
		num2 = num3;
	}

	for (i = 1; i <= 100; i++) {
		//i가 num1의 약수면 그 i를 출력하고 counter에 1 더해줌
		if (i % num1 == 0) {
			cout << setw(5) << i;
			counter += 1;
			
			//만약 couter가 5의 배수면 지금까지 5의 배수만큼 출력되었다는 뜻이니까 예제처럼 줄바꿈
			if (counter % 5 == 0)
				cout << "\n";
		}

		if (i % num1 == i % num2) {
			continue;
		}
		//i가 num2의 약수면 그 i를 출력하고 counter에 1 더해줌
		else if (i % num2 == 0) {
			cout << setw(5) << i;
			counter += 1;

			//만약 couter가 5의 배수면 지금까지 5의 배수만큼 출력되었다는 뜻이니까 예제처럼 줄바꿈
			//만약 else문에서 counter값이 늘어나서 5의 배수가 되고, if문에서 또 counter값이 늘어나면 줄바꿈이 무시될까봐 중복해서 넣었는데 더 좋은 코드 있으면 알려주세요...
			if (counter % 5 == 0)
				cout << "\n";
		}


	}

	//total값으로 counter값 
	cout << "\ntotal : " << counter;

	return 0;
}

