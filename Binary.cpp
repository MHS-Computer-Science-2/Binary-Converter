#include <iostream>
using namespace std;

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
		
		//If quotient is 0, break the loop
		/* to be completed */
	}  

	//Return the string containing the binary
	return result;
}


int main()
{
	srand(unsigned(time(0)));
	system("color a");
	int completed = 0;


	while (true) {
		cout << "-----------------------------------" << endl;
		cout << "Welcome to the Binary Numbers Game!" << endl;
		cout << "-----------------------------------" << endl;
		cout << completed << "/10 complete" << endl << endl;


		//Random problem type (0 or 1)
		int problemType = rand() % 2;

		if (problemType == 0) {
			/// Binary -> Decimal

			// Generate the decimal number
			int decimal = rand() % 32;
			// Convert it to binary
			string binary = toBinary(decimal);

			//Give user the binary and ask for the decimal
			cout << "What is " << binary << " in decimal?" << endl;
			while (true) {
				int playerAnswer;
				cin >> playerAnswer;

				//Check player answer
				if (playerAnswer == decimal) {
					cout << "Correct!" << endl;
					completed++;
					//Leave the loop
					break;
				}
				else {
					cout << "Try again!" << endl;
				}
			}
		}
		else {
			/// Decimal -> Binary

			cout << "This question type has not been completed " << endl;
		}

		//Pause, then clear the screen before the next round
		system("pause");
		system("cls");
	}

	cout << "Congratulations, You Passed!" << endl << endl;

	system("Pause");
}
