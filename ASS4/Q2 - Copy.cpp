#include <iostream.h>
#include <conio.h>

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void addMatrices(const int matrix1[MAX_ROWS][MAX_COLS], const int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void displayMatrix(const int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

    // Input first matrix
    inputMatrix(matrix1, MAX_ROWS, MAX_COLS);

    // Input second matrix
    inputMatrix(matrix2, MAX_ROWS, MAX_COLS);

    // Add matrices
    addMatrices(matrix1, matrix2, result, MAX_ROWS, MAX_COLS);

    // Display matrices
    cout << "Matrix 1:" << endl;
    displayMatrix(matrix1, MAX_ROWS, MAX_COLS);

    cout << "Matrix 2:" << endl;
    displayMatrix(matrix2, MAX_ROWS, MAX_COLS);

    cout << "Sum of Matrices:" << endl;
    displayMatrix(result, MAX_ROWS, MAX_COLS);

    getch();  // Wait for a key press before closing the console window
    return 0;
}
