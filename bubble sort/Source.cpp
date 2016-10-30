#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	int arr[5];

	cout << "Enter 5 Elements to be Inserted into Arrays: ";
	
	//Inputting 5 Elements to Array
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	//Loop for Bubble Sorting
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				int swap;
				swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
		
	}

	//Outputting Sorted Elements
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
}