#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::endl;

void Quiz1()
{
	int n;
	cout << "Please enter one integer : ";
	cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << setw((static_cast<std::streamsize>(n) - i + 1) );
        for (int j = i*2 - 1; j >= 1; j--)
        {
            cout << "*";// << " ";
        }
        cout << "\n";
    }

    for (int i = n-1; i >= 1; i--)
    {
        cout << setw((static_cast<std::streamsize>(n) - i + 1) );
        for (int j = i * 2 - 1; j >= 1; j--)
        {
            cout << "*";// << " ";
        }
        cout << "\n";
    }

    cout << "\n"; cout << "\n";
}

void Quiz2()
{
    int n, sum = 1;
    cout << "Please enter one integer : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }

    cout << n << "! = " << sum;

}

void Quiz3()
{
    
    int n, m;
    cout << "Please enter two integer N, M : ";
    cin >> n >> m;
    //cout << n << m;
    
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            cout << j << " ¡¿ " << i << " = " << setw(3) << j * i << setw(5);
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 1; i <= n; i++)
    {

        for (int j = m + 1; j <= n; j++)
        {
            cout << j << " ¡¿ " << i << " = " << setw(3) << j * i << setw(5);
        }
        cout << "\n";
    }

}

void Quiz4()
{
    int n, m, i = 1, j = 1, multi_n, multi_m, cnt = 0, last = 0, total = 0;
    cout << "Please enter two integer N, M : ";
    cin >> n >> m;

   
    while ((n * i <= 100) || (m * j <= 100))
    {
    
        multi_n = n * i;
        multi_m = m * j;

        cout << setw(3);
        
        if(multi_n < multi_m)
        {
            if (multi_n == last) { i++; continue; }
            cout << multi_n;
            total++;
            last = multi_n;
            i++;

        }
        else
        {
            if (multi_m == last) { j++; continue; }
            cout << multi_m;
            total++;
            last = multi_m;
            j++;
        }

        cnt++;

        if (cnt % 5 == 0) cout << "\n";

    } 

    cout << endl;

    cout << "total : " << total;
}

void Quiz5()
{
    char ch;
    int ja = 0, mo = 0;

    while ((ch = cin.get()) != EOF)
    {
        switch(ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            mo++;
            break;

        case ' ':
        case '\t':
        case '\n':
            break;

        default:
            ja++;
            break;
        }
    }

    cout << "ÀÚÀ½ : " << ja << "\n";
    cout << "¸ðÀ½ : " << mo;
}   

int main()
{
    Quiz1();
	return 0;
}
