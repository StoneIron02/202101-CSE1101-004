#include <iostream>
using namespace std;

static int nStatic;

void sumofsquares(int, int);

int main_Quiz2()
{
    int mean = 2;
    for (int x = 2; x < 10; x++) {
        sumofsquares(x, mean);
    }

    return 0;
}

void sumofsquares(int x, int mean) {

    nStatic += (x - mean) * (x - mean);

    cout << "Sum of squares in " << x << ": " << nStatic << endl;

}
