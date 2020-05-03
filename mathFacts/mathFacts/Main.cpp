#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <conio.h>

#include <stdlib.h>

using namespace std;

int main() {
	int intFirstNumber, intSecondNumber, intCorrectAnswer, intUserAnswer, intCount = 0, intTotalCorrect = 0;
	string strResponse;
	bool blnChecker = false, blnAgain;
	srand(time(0));

	system("Color 0E");
	printf("Type GO to start learning subtraction math facts between one and twenty!");
	cout << endl;
	cin >> strResponse;


	while (blnChecker == false) {
		if (strResponse == "go" || strResponse == "GO" || strResponse == "Go") {
			blnChecker = true;
			cout << "------------------------------------------------------------------------------------" << endl;
			clock_t start = clock();
		}
		else {
			printf("Please enter GO to begin.");
			cout << endl;
			cin >> strResponse;
		}
	}


	while (intCount < 50) {
		intFirstNumber = 1 + (rand() % 20);
		intSecondNumber = 1 + (rand() % 20);
		if (intFirstNumber >= intSecondNumber) {
			intCount += 1;
			cout << intFirstNumber << "-" << intSecondNumber << "=" << endl;
			intCorrectAnswer = intFirstNumber - intSecondNumber;

			cin >> intUserAnswer;
			if (intUserAnswer == intCorrectAnswer) {
				intTotalCorrect += 1;
				system("Color 02");
			}
			else {
				system("Color 04");
			}

			if ((clock() / CLOCKS_PER_SEC) >= 120) {
				cout << "Time has run out." << endl;
				intCount = 50;
			}

		}
	}

	cout << "your score is: " << intTotalCorrect << " / 50";
	cin >> strResponse;


	return 0;
}