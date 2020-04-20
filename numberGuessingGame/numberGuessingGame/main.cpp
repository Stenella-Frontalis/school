// imports all needed items
// creates all variables
// enters a loop until user wants to stop playing with corresponding text and creates a random number
// enters loop that has user enter number until number matches random number
// when user guesses number ask if they want to play again

//note: due to limited knowledge of this coding language I was unable to write code that would make sure all entered characters where numeric (although I did try for several hours)
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	int intRandom, intGuess;
	string strAnswer, strGuess;
	int intCount = 0, intCounter = 1;
	bool blnDone = false, blnChecker = false, blnIsAlpha = false;

	while (blnDone == false) {

		printf("A random integer between 1 and 100 has been generated.");
		cout << endl;
		printf("Enter a guess below of what it could be.");
		cout << endl;

		srand(time(0));
		intRandom = 1 + (rand() % 100);

		do {
			intCount++;

			cin >> intGuess;
			
			if (intGuess > 100 || intGuess < 1) {
				printf("Please enter an integer between 1 and 100.");
				cout << endl;
			}
			else if (intGuess == intRandom) {
				printf("You have successfully guesed the number after ");
				cout << intCount << " guesses." << endl;
			}
			else if (intGuess <= intRandom) {
				printf("The numbered you guesed is to low.");
				cout << endl;
			}
			else if (intGuess >= intRandom) {
				printf("The numbered you guesed is to high.");
				cout << endl;
			}
			
			blnChecker = false;
			intCounter = 1;

			cin.get();
		} while (intGuess != intRandom);


		while (blnChecker == false) {
			printf("Do you want to play again? (yes or no)");
			cout << endl;
			cin >> strAnswer;
			if (strAnswer == "No" || strAnswer == "no" || strAnswer == "n" || strAnswer == "N") {
				blnChecker = true;
				blnDone = true;
			}
			else if (strAnswer == "Yes" || strAnswer == "yes" || strAnswer == "y" || strAnswer == "Y") {
				blnChecker = true;
			}
			else {
				printf("Please enter yes or no.");
			}
		}
		blnChecker = false;
	}
	return 0;
}