#include <iostream>
using namespace std;

string toBinary(int number) {
	//Variable to store the binary
	string result = ""; 

	do {
		//Get the remainder of dividing the number by 2
		int remainder = /*to be completed*/

			//If number / 2 has remainder 0
			if (/*to be completed*/) {
				result = '0' + result;
			}
		//If number / 2 has remainder 1
			else if (/*to be completed*/d) {
				result = '1' + result;
			}
		//Divide number by 2
		number = /*to be completed*/;

	} while (/*to be completed*/); //Loop while the number is not 0

	//Return the string containing the binary
	return result; 
}


//int toDecimal(string binary) {
//	int total = 0; //Will store the decimal number
//
//	//Set the starting exponent
//	//For example: 1011 would have a starting exponent of 3
//
//	int exponent = /*to be completed*/;    
//
//	//Loop through all characters
//	for (int i = 0; i < binary.length(); i++) { 
//		
//		//Check to see if the character is a '1'
//		if (/*to be completed*/) {       
//			total = total + pow(2, exponent);
//		}
//
//		//Reduce the exponent by 1
//		exponent = /*to be completed*/; 
//	}
//
//	//Return the decimal number
//	return total; 
//}



int main()
{

	//Test toBinary
	cout << “Enter a number to convert to binary” << endl;
	int num;
	cin >> num;
	cout << toBinary(num) << endl;
	
	//Test toDecimal
	//cout << “Enter a binary number to convert to decimal” << endl;
	//string binary;
	//cin >> binary;
	//cout << toDecimal(binary) << endl;



    system("Pause");
}
