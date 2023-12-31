#include <iostream.h>
#include <conio.h>

const int MAX_STUDENTS = 1; // Maximum number of students

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void inputStudentDetails(Student students[MAX_STUDENTS], int count) {
    for (int i = 0; i < count; ++i) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        cout << "Name: ";
	cin.getline(students[i].name, sizeof(students[i].name));
	//cin.getline(students[i].name);
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
        cin.ignore(); // Clear the newline character from the input buffer
        cout << endl;
    }
}

void displayStudentDetails(const Student students[MAX_STUDENTS], int count) {
    cout << "Student Details:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl;
    }
}

int main() {
    Student studentArray[MAX_STUDENTS];

    // Input details for each student
    inputStudentDetails(studentArray, MAX_STUDENTS);

    // Display details for each student
    displayStudentDetails(studentArray, MAX_STUDENTS);

    getch(); // Wait for a key press before closing the console window
    return 0;
}
