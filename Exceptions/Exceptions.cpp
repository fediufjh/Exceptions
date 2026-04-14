/*
Jaxon Finkelstein
4/14/26
CIS 1202 K01
V1.0
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
	string invalidCharacterException = "invalidCharacterException";
	string invalidRangeException = "invalidRangeException";

	if (!isalpha(start)) {
		throw invalidCharacterException;
	}
	else if (!isalpha(start + offset)) {
		throw invalidRangeException;
	}
	else {
		return start + offset;
	}
}
