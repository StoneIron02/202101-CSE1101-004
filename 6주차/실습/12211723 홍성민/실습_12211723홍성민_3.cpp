#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

static int nStatic;

void sumofsquares1(int, int);

int main_Quiz3()
{
    int mean;
    srand(time(0));

    cout << "input your mean : ";
    cin >> mean;

    for (int i = 0; i < 10; i++) {
        sumofsquares1(rand() % 101, mean);
    }

    return 0;
}


void sumofsquares1(int x, int mean) {

    nStatic += (x - mean) * (x - mean);

    cout << "Sum of squares in x = " << x << " : " << nStatic << endl;

}
