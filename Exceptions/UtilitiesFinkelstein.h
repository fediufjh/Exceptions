/*
File: UtilitiesFinkelstein.h
Topic: Utilities Library
*/

#ifndef UTILITIES_FINKELSTEIN_H
#define UTILITIES_FINKELSTEIN_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <random>
#include <cmath>

using namespace std;

//input functions
int getInt(string prompt, int min, int max);
float getFloat(string prompt, int min, int max);
double getDouble(string prompt, int min, int max);
string getString(string prompt);
char getYN(string prompt);

//random
int getRandom(string prompt, int min, int max);
int getRandom(int min, int max);

//end program
int endProgram(string prompt);
int endProgram();

//sorting - int
void bubbleSort(vector<int>& a);
void bubbleSort(int arr[], int size);
void selectionSort(vector<int>& a);
void selectionSort(int arr[], int size);
void selectionSort(int arr[], int size, int& comparisons, int& swaps);
void insertionSort(vector<int>& a);
void insertionSort(int arr[], int size, int& comparisons, int& moves);

//sorting - float
void bubbleSort(vector<float>& a);
void bubbleSort(float arr[], int size);
void selectionSort(vector<float>& a);
void selectionSort(float arr[], int size);
void insertionSort(vector<float>& a);
void insertionSort(float arr[], int size);

//sorting - double
void bubbleSort(vector<double>& a);
void bubbleSort(double arr[], int size);
void selectionSort(vector<double>& a);
void selectionSort(double arr[], int size);
void insertionSort(vector<double>& a);
void insertionSort(double arr[], int size);

//searching - int
int linearSearch(vector<int>& a, int& target);
int linearSearch(int arr[], int& target, int size);
int binarySearch(vector<int>& a, int& target);
int binarySearch(int arr[], int& target, int size);

//searching - float
int linearSearch(vector<float>& a, float& target);
int linearSearch(float arr[], float& target, int size);
int binarySearch(vector<float>& a, float& target);
int binarySearch(float arr[], float& target, int size);

//searching - double
int linearSearch(vector<double>& a, double& target);
int linearSearch(double arr[], double& target, int size);
int binarySearch(vector<double>& a, double& target);
int binarySearch(double arr[], double& target, int size);

#endif
