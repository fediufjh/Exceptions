/*
Jaxon Finkelstein
4/14/26
CIS 1202 K01
V1.1
Exceptions
*/

#include "UtilitiesFinkelstein.h"

char character(char, int);

int main() {
	try {
		cout << character('a', 1) << endl;
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}

	try {
		cout << character('a', -1) << endl;
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}

	try {
		cout << character('Z', -1) << endl;
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}

	try {
		cout << character('?', 5) << endl;
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}
	
	try {
		cout << character('A', 32) << endl;
	}
	catch (string exceptionString) {
		cout << exceptionString << endl;
	}

	endProgram();
}

char character(char start, int offset) {
	if (!isalpha(start)) {
		string exceptionString = "invalidCharacterException";
		throw exceptionString;
	}
	else if ((!isalpha(start + offset)) || (isupper(start) && islower(start + offset)) || (islower(start) && isupper(start + offset))) {
		string exceptionString = "invalidRangeException";
		throw exceptionString;
	}
	else {
		return start + offset;
	}
}
