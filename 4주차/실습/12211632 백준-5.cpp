#include <iostream>
using std::cout;
using std::cin;
using std::endl;

      // function main begins program execution
    int main()
    {
	 int grade;       
	 int aCount = 0;
	 int bCount = 0;
	 int cCount = 0;
	 int dCount = 0;
	 int e = 0;
	 int fCount = 0;
	 while ((grade = cin.get()) != EOF)
	 {
		 switch (grade)
		 {

		 case 'A':
		 case 'a':
			 ++aCount;
			 break;

		 case 'E':
		 case 'e':
			 ++bCount;
			 break;

		 case 'I':
		 case 'i':
			 ++cCount;
			 break;
		 case 'o':
		 case 'O':
			 ++dCount;
			 break;

		 case 'U':
		 case 'u':
			 ++fCount;
			 break;

		 case '\n':
		 case '\t':
		 case ' ':
			 break;

		 default:
			 ++e;
			 break;


		 }
	 }
			   cout << "모음" << aCount + bCount + cCount + dCount + fCount << endl;
			   cout << "자음" << e << endl;
			 return 0;  

	} 
