#include <iostream>
using namespace std;

// Input: number is a base 10 number
// Output: returns a string containing the binary for number
string getBinary(int number) {
	//Variable to store the binary
	string result = "";

	while(true) {
		//Get the remainder of dividing the number by 2
		int remainder = /* to be completed */;

		//If remainder is 0
		if (/* to be completed */) {
			result = '0' + result;
		}
		//Else If remainder is 1
		else if (/* to be completed */) {
			result = '1' + result;
		}
		//Divide number by 2
		/* to be completed */
		
		//If number is 0, break the loop
		/* to be completed */
	}  

	//Return the string containing the binary
	return result;
}


int main()
{
	//This code will test your getBinary function.
	// The ouput should be:
	// 0
	// 110
	// 111
	// 10011
	// 10111
	cout << getBinary(0) << endl;
	cout << getBinary(6) << endl;
	cout << getBinary(7) << endl;
	cout << getBinary(19) << endl;
	cout << getBinary(23) << endl;
	//Once your function works, delete this testing code.

	system("pause");
}
