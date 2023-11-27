//Q1. WAP of 2-D Array.

#include <iostream.h>
#include <conio.h>

//const int ROWS = 3;
//const int COLS = 3;

void inputMatrix(int matrix[3][3]) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
	for (int j = 0; j < 3; ++j) {
	    cout << "Enter element at position [" << i << "][" << j << "]: ";
	    cin >> matrix[i][j];
	}
    }
}

void displayMatrix(int matrix[3][3]) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
	for (int j = 0; j < 3; ++j) {
	    cout << matrix[i][j] << " ";
	}
	cout << endl;
    }
}

int main() {
    int myMatrix[3][3];
    clrscr();

    inputMatrix(myMatrix);

    displayMatrix(myMatrix);

    getch();
    return 0;
}
