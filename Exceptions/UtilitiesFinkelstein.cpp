/*
File: UtilitiesFinkelstein.cpp
Topic: Utilities Library
*/

#include "UtilitiesFinkelstein.h"

//getInt function
int getInt(string prompt, int min, int max) {
	int num;
	cout << prompt;
	while (!(cin >> num) || cin.fail() || num < min || num > max) {
		cout << "Invalid response!";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "\n" << prompt;
	}
	return num;
}

//getFloat function
float getFloat(string prompt, int min, int max) {
	float num;
	cout << prompt;
	while (!(cin >> num) || cin.fail() || num < min || num > max) {
		cout << "Invalid response!";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "\n" << prompt;
	}
	return num;
}

//getDouble function
double getDouble(string prompt, int min, int max) {
	double num;
	cout << prompt;
	while (!(cin >> num) || cin.fail() || num < min || num > max) {
		cout << "Invalid response!";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "\n" << prompt;
	}
	return num;
}

//getString function
string getString(string prompt) {
	string letter;
	cout << prompt;
	while (!(cin >> letter) || cin.fail()) {
		cout << "Invalid response!";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "\n" << prompt;
	}
	return letter;
}

//overloaded random number function with prompt
int getRandom(string prompt, int min, int max) {
	cout << prompt;
	random_device rand_dev;
	mt19937 gen(rand_dev());
	uniform_int_distribution<int> dist(min, max);
	cout << endl;
	return dist(gen);
}

//overloaded random number function without prompt
int getRandom(int min, int max) {
	random_device rand_dev;
	mt19937 gen(rand_dev());
	uniform_int_distribution<int> dist(min, max);
	return dist(gen);
}

//char getYN function
char getYN(string prompt) {
	char letter;
	cout << prompt;
	while (!(cin >> letter) || cin.fail() || (!(tolower(letter) == 'y') && !(tolower(letter) == 'n'))) {
		cout << "Invalid response!";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "\n" << prompt;
	}
	letter = tolower(letter);
	return letter;
}

//overloaded end program with prompt
int endProgram(string prompt) {
	cout << prompt;
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}

//overloaded end program with no prompt
int endProgram() {
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}

//overloaded bubbleSort int vector function
void bubbleSort(vector<int>& a) {
	for (int pass = 0; pass < a.size() - 1; pass++) {
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i] > a[i + 1]) {
				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}

//overloaded bubbleSort int array function
void bubbleSort(int arr[], int size) {
	for (int pass = 0; pass < size - 1; pass++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

//overloaded selectionSort int vector function
void selectionSort(vector<int>& a) {
	for (int start = 0; start < a.size() - 1; start++) {
		int minIndex = start;
		for (int nextIndex = start + 1; nextIndex < a.size(); nextIndex++) {
			if (a[nextIndex] < a[minIndex]) {
				minIndex = nextIndex;
			}
		}
		int temp = a[start];
		a[start] = a[minIndex];
		a[minIndex] = temp;
	}
}

//overloaded selectionSort int array function
void selectionSort(int arr[], int size, int& comparisons, int& swaps) {
	for (int start = 0; start < size - 1; start++) {
		int minIndex = start;
		for (int nextIndex = start + 1; nextIndex < size; nextIndex++) {
			if (arr[nextIndex] < arr[minIndex]) {
				minIndex = nextIndex;
			}
			comparisons++;
		}
		int temp = arr[start];
		arr[start] = arr[minIndex];
		arr[minIndex] = temp;
		swaps++;
	}
}

//overloaded selectionSort int array function
void selectionSort(int arr[], int size) {
	for (int start = 0; start < size - 1; start++) {
		int minIndex = start;
		for (int nextIndex = start + 1; nextIndex < size; nextIndex++) {
			if (arr[nextIndex] < arr[minIndex]) {
				minIndex = nextIndex;
			}
		}
		int temp = arr[start];
		arr[start] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

//overloaded insertionSort int vector function
void insertionSort(vector<int>& a) {
	for (int start = 1; start < a.size() - 1; start++) {
		int value = a[start];
		int prevIndex = start - 1;
		while (prevIndex >= 0 && a[prevIndex] > value) {
			a[prevIndex + 1] = a[prevIndex];
			prevIndex = prevIndex - 1;
		}
		a[prevIndex + 1] = value;
	}
}

//overloaded insertionSort int array function
void insertionSort(int arr[], int size, int& comparisons, int& moves) {
	for (int start = 1; start < size; start++) {
		int value = arr[start];
		int prevIndex = start - 1;
		while (prevIndex >= 0 && comparisons++ && arr[prevIndex] > value) {
			arr[prevIndex + 1] = arr[prevIndex];
			prevIndex = prevIndex - 1;
		}
		arr[prevIndex + 1] = value;
		moves++;
	}
}

//overloaded bubbleSort float vector function
void bubbleSort(vector<float>& a) {
	for (int pass = 0; pass < a.size() - 1; pass++) {
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i] > a[i + 1]) {
				float temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}

//overloaded bubbleSort float array function
void bubbleSort(float arr[], int size) {
	for (int pass = 0; pass < size - 1; pass++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				float temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

//overloaded selectionSort float vector function
void selectionSort(vector<float>& a) {
	for (int start = 0; start < a.size() - 1; start++) {
		int minIndex = start;
		for (int nextIndex = start + 1; nextIndex < a.size(); nextIndex++) {
			if (a[nextIndex] < a[minIndex]) {
				minIndex = nextIndex;
			}
		}
		float temp = a[start];
		a[start] = a[minIndex];
		a[minIndex] = temp;
	}
}

//overloaded selectionSort float array function
void selectionSort(float arr[], int size) {
	for (int start = 0; start < size - 1; start++) {
		int minIndex = start;
		for (int nextIndex = start + 1; nextIndex < size; nextIndex++) {
			if (arr[nextIndex] < arr[minIndex]) {
				minIndex = nextIndex;
			}
		}
		float temp = arr[start];
		arr[start] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

//overloaded insertionSort float vector function
void insertionSort(vector<float>& a) {
	for (int start = 1; start < a.size() - 1; start++) {
		float value = a[start];
		int prevIndex = start - 1;
		while (prevIndex >= 0 && a[prevIndex] > value) {
			a[prevIndex + 1] = a[prevIndex];
			prevIndex = prevIndex - 1;
		}
		a[prevIndex + 1] = value;
	}
}

//overloaded insertionSort float array function
void insertionSort(float arr[], int size) {
	for (int start = 1; start < size - 1; start++) {
		float value = arr[start];
		int prevIndex = start - 1;
		while (prevIndex >= 0 && arr[prevIndex] > value) {
			arr[prevIndex + 1] = arr[prevIndex];
			prevIndex = prevIndex - 1;
		}
		arr[prevIndex + 1] = value;
	}
}

//overloaded bubbleSort double vector function
void bubbleSort(vector<double>& a) {
	for (int pass = 0; pass < a.size() - 1; pass++) {
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i] > a[i + 1]) {
				double temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}

//overloaded bubbleSort double array function
void bubbleSort(double arr[], int size) {
	for (int pass = 0; pass < size - 1; pass++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				double temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

//overloaded selectionSort double vector function
void selectionSort(vector<double>& a) {
	for (int start = 0; start < a.size() - 1; start++) {
		int minIndex = start;
		for (int nextIndex = start + 1; nextIndex < a.size(); nextIndex++) {
			if (a[nextIndex] < a[minIndex]) {
				minIndex = nextIndex;
			}
		}
		double temp = a[start];
		a[start] = a[minIndex];
		a[minIndex] = temp;
	}
}

//overloaded selectionSort double array function
void selectionSort(double arr[], int size) {
	for (int start = 0; start < size - 1; start++) {
		int minIndex = start;
		for (int nextIndex = start + 1; nextIndex < size; nextIndex++) {
			if (arr[nextIndex] < arr[minIndex]) {
				minIndex = nextIndex;
			}
		}
		double temp = arr[start];
		arr[start] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

//overloaded insertionSort double vector function
void insertionSort(vector<double>& a) {
	for (int start = 1; start < a.size() - 1; start++) {
		double value = a[start];
		int prevIndex = start - 1;
		while (prevIndex >= 0 && a[prevIndex] > value) {
			a[prevIndex + 1] = a[prevIndex];
			prevIndex = prevIndex - 1;
		}
		a[prevIndex + 1] = value;
	}
}

//overloaded insertionSort double array function
void insertionSort(double arr[], int size) {
	for (int start = 1; start < size - 1; start++) {
		double value = arr[start];
		int prevIndex = start - 1;
		while (prevIndex >= 0 && arr[prevIndex] > value) {
			arr[prevIndex + 1] = arr[prevIndex];
			prevIndex = prevIndex - 1;
		}
		arr[prevIndex + 1] = value;
	}
}

//overloaded linearSearch int vector function
int linearSearch(vector<int>& a, int& target) {
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < a.size() && !found) {
		if (a[index] == target) {
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

//overloaded linearSearch int array function
int linearSearch(int arr[], int& target, int size) {
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < size && !found) {
		if (arr[index] == target) {
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

//overloaded linearSearch float vector function
int linearSearch(vector<float>& a, float& target) {
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < a.size() && !found) {
		if (a[index] == target) {
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

//overloaded linearSearch float array function
int linearSearch(float arr[], float& target, int size) {
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < size && !found) {
		if (arr[index] == target) {
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

//overloaded linearSearch double vector function
int linearSearch(vector<double>& a, double& target) {
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < a.size() && !found) {
		if (a[index] == target) {
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

//overloaded linearSearch double array function
int linearSearch(double arr[], double& target, int size) {
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < size && !found) {
		if (arr[index] == target) {
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

//overloaded binarySearch int vector function
int binarySearch(vector<int>& a, int& target) {
	int low = 0;
	int high = a.size() - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (a[mid] == target) {
			return mid;
		}
		else if (a[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

//overloaded binarySearch int array function
int binarySearch(int arr[], int& target, int size) {
	int low = 0;
	int high = size - 1;
	int mid = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

//overloaded binarySearch float vector function
int binarySearch(vector<float>& a, float& target) {
	float low = 0;
	float high = a.size() - 1;
	while (low <= high) {
		float mid = (low + high) / 2;
		if (a[mid] == target) {
			return mid;
		}
		else if (a[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

//overloaded binarySearch float array function
int binarySearch(float arr[], float& target, int size) {
	float low = 0;
	float high = arr[size] - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

//overloaded binarySearch double vector function
int binarySearch(vector<double>& a, double& target) {
	double low = 0;
	double high = a.size() - 1;
	while (low <= high) {
		double mid = (low + high) / 2;
		if (a[mid] == target) {
			return mid;
		}
		else if (a[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

//overloaded binarySearch double array function
int binarySearch(double arr[], double& target, int size) {
	double low = 0;
	double high = arr[size] - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}
