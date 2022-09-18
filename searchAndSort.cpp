//============================================================================
// Name        : searchAndSort.cpp
// Author      : Sharan Robinson
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include "SearchSort.hpp"
using namespace std;


void printData(vector<int> vect);
void generateRandomNumbers(vector<int> &vect);
void clearCin();


int main(){

	vector<int> vect;
	while(true){
	cout << "Welcome to my Sort/Search App" << endl;
	cout << "==============================="<< endl;
	cout << "1. Generate Random Data" << endl;
	cout << "2. Bubble Sort the Vector" << endl;
	cout << "3. Select Sort the Vector" << endl;
	cout << "4. Binary Search the Vector" << endl;
	cout << "5. Linear Search the Vector" << endl;
	cout << "6. Print out the Vector" << endl;
	cout << "x. Exit the program" << endl;
	cout << "Please Enter a menu option:"<< endl;

	char option;
	cin >> option;
	clearCin();

	if(option == '1'){
		generateRandomNumbers(vect);
		printData(vect);
	}else if(option == '2'){
		if(vect.size() == 0){
			cout << "Please generate some numbers to do this operation on!"<< endl;
			continue;
		}
		char aord;
		cout << "Enter Order A or D:" << endl;
		cin >> aord;
		bubbleSort(vect, aord);
		printData(vect);
	}else if(option == '3'){
		if(vect.size() == 0){
					cout << "Please generate some numbers to do this operation on!"<< endl;
					continue;
				}
		char aord;
		cout << "Enter Order A or D:" << endl;
		cin >> aord;
		selectSort(vect, aord);
		printData(vect);
	}else if(option == '4'){
		if(vect.size() == 0){
			cout << "Please generate some numbers to do this operation on!"<< endl;
			continue;
		}
		int searchNumber;
		cout << "Enter number to search for:" << endl;
		cin >> searchNumber;
		if(intBinSearch(vect, searchNumber) == 0){
			cout << "Not Found!" << endl;
		}else{
			cout << "Found!" << endl;
		}

	}else if(option == '5'){
		if(vect.size() == 0){
		cout << "Please generate some numbers to do this operation on!"<< endl;
		continue;
		}
		int searchNumber;
		cout << "Enter number to search for:" << endl;
		cin >> searchNumber;
		if(intLinearSearch(vect, searchNumber) == 0){
			cout << "Not Found!" << endl;
		}else{
			cout << "Found!" << endl;
			}
	}else if(option == '6'){
		if(vect.size() == 0){
		cout << "Please generate some numbers to do this operation on!"<< endl;
		continue;
		}
		printData(vect);
	}else if(option == 'x'){
		break;
	}else{
		continue;
	}
	}


	cout << "End of program." << endl;
	return 0;
}

void clearCin(){
	cin.clear();
	cin.ignore();
}

void generateRandomNumbers(vector<int> &vect){
	vect.clear();
	for(int i=0;i<20;i++){
		int randomNumber = rand() % 100 + 1;
		vect.push_back(randomNumber);
	}

}


void printData(vector<int> vect){
	for(int i=0;i<20;i++)
		cout<<vect[i]<<" ";
	cout << "" << endl;
}
