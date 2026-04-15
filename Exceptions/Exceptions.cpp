/*
Jaxon Finkelstein
4/15/26
CIS 1202 K01
V1.2
Exceptions
*/

#include "UtilitiesFinkelstein.h" //personal utilities file

char character(char, int); //prototyping function

int main() {
	try { //try catch loop is used for exception handling
		cout << character('a', 1) << endl; //char & int is passed to character, returns 'b'
	}
	catch (string exceptionString) { //exceptionString must be defined as string with every catch
		cout << exceptionString << endl;
	}

	try {
		cout << character('a', -1) << endl; //invalidRangeException, 'a' offset by -1 is not a letter
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}

	try {
		cout << character('Z', -1) << endl; //returns 'Y'
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}

	try {
		cout << character('?', 5) << endl; //invalidCharacterException, '?' is not a letter
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}
	
	try {
		cout << character('A', 32) << endl; //rangeCharacterException, does not switch between uppercase & lowercase/lowercase & uppercase
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}

	endProgram(); //utilities function that gracefully exits the program
}

char character(char start, int offset) { //character offsets the start char by the offset, contains exception handling
	if (!isalpha(start)) { //throws an exception if the start char is not a letter
		string exceptionString = "invalidCharacterException";
		throw exceptionString; //try catch loop in main handles this exception
	}
	else if ((!isalpha(start + offset)) || (isupper(start) && islower(start + offset)) || (islower(start) && isupper(start + offset))) { //throws an exception if the target char is not a letter or if there is a transtion from uppercase to lowercase/lowercase to uppercase
		string exceptionString = "invalidRangeException";
		throw exceptionString;
	}
	else { //valid start, offset, & target
		return start + offset; //returns the target to main
	}
}
