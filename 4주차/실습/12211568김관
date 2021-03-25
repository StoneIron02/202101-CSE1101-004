//Quiz 1


#include <iostream>
using namespace std;

int main()
{
	int num;


	cout << "원하시는 숫자를 입력하세요 ->\t";
	cin >> num;

	cout << "\n\n";

	for (int x{ 1 }; x<=2*num-1; x++)
	{
		if (x <= num)
		{
			for (int y{ 1 }; y < num + x; y++)
			{
				if (y <= num - x)
					cout << " ";

				if (y > num - x && y < num + x)
					cout << "*";


			}
		}
		if (x > num)
		{
			for (int z{ 1 }; z <= 2 * num - 1 - (x - num); z++)
			{
				if (z <= x - num)
					cout << " ";

				if (z > x - num && z <= 2 * num - 1 - (x - num))
					cout << "*";


			}
      
		}
		


		cout << "\n";

	}

	cout << "\n\n\n";

}




//Quiz 2

#include <iostream>
using namespace std;

int main()
{   
    int num;
    int result = 1;
    
 
    cout << "원하는 자연수를 입력하세요->\t";
    cin >> num;


    for (int x{ num }; x > 0; x--)
        result = result * x;

      



    cout << "\n" << num << "! =\t" << result;

}





//Quiz 3  -> 많이 어려운것 같아서 주석 달았습니다.



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    int k;

    cout << "Input N, M ->";
    cin >> a >> b;
    cout << "\n\n";                

    for (int z{ 1 }; z <= a; z=z+b)                                      //행(가장 큰 단위)에 들어갈 첫번쨰 단락의 순서 (ex 첫째행 1, 둘째행 4, 셋째행 7)
    {

        for (int y{ 1 }; y <= a; y++)                                    //한 행안에서 줄의 순서
        {
          
            for (int x{ z }; x < z+b; x++)                               //한 줄에서의 단락 순서의 범위
            {
                if (x <=a)                                                               //a보다 크면 출력안함
                    cout << x << "*" << y << "= " << setw(3) << x * y << "\t\t";

                if (x % b == 0) cout << "\n";                                            //한 줄이 완료되면 아래로





            }
            
            if (y % a == 0) cout << "\n";              //한 행이 완료되면 한줄 띄기

        }
        
        
    }


}





//Quiz 4

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{   
    int a, b;
    int k = 1;

    cin >> a >> b;

    
    
    for (int x{ 1 }; x < 100; x++)
    {   
        
        if (x % a == 0 || x % b == 0)
        {
            cout << setw(5) << x;

            k++;

        }
        
        if (k % 5 == 0)
            cout << "\n";
        
        

    }


}





//Quiz 5는 거의 다 비슷할 것 같아서 안 올립니다.




