#include <iostream>
#include <string>
using namespace std;

char calculateLetterGrade(int grade) {
    return (grade >= 90) ? 'A' : (grade >= 80) ? 'B' : (grade >= 70) ? 'C' : (grade >= 60) ? 'D' : 'F';
}

double calculateAverage(int grades[], int length) {
    double sum = 0;
    for (int i = 0; i < length; i++) {
        sum += grades[i];
    }
    return sum / length;
}

int main() {
    int numGrades; // Changed variable name from howlong to numGrades
    cout << "This is a grade calculator that gives you the letter grades" << endl;
    cout << "Note: This program will not work if you don't follow the instructions printed out" << endl;
    cout << "Enter the number of grades you have: ";
    cin >> numGrades;

    int scores[numGrades];
    cout << "Enter " << numGrades << " grades, separated by spaces: ";
    for (int i = 0; i < numGrades; i++) {
        cin >> scores[i];
    }

    cout << "The letter grades for the entered number grades are: ";
    for (int i = 0; i < numGrades; i++) {
        cout << calculateLetterGrade(scores[i]) << " ";
    }
    cout << endl;

    double average = calculateAverage(scores, numGrades);
    char finalLetter = calculateLetterGrade(static_cast<int>(average));
    
    cout << "The average grade is: " << average << endl;
    cout << "Your average as a letter grade: " << finalLetter << endl;
    cout << "Good luck next time!" << endl;

    return 0;
}
