// GPA calculator.cpp : Calculates a students GPA when grades and credit hours are entered as floats
//

#include <iostream>
using namespace std;

int main ()
{
    // Let the user know which format to use when entering grades
    cout << "\n---------------------------------------------------------------------------" << endl;
    cout << "Welcome to the GPA Calculator! Please enter each grade as a numerical value." << endl;
    cout << "A = 4.0" << endl;
    cout << "B = 3.0" << endl;
    cout << "C = 2.0" << endl;
    cout << "D = 1.0" << endl;
    cout << "E = 0.0" << endl;
    cout << endl;

    // Get grades and credit hours from user
    float gradeForClass1, gradeForClass2, gradeForClass3, gradeForClass4, gradeForClass5;
    float creditsForClass1, creditsForClass2, creditsForClass3, creditsForClass4, creditsForClass5;
    cout << "Please enter the GPA and credit hours for your first class: ";
    cin >> gradeForClass1 >> creditsForClass1;
    cout << "\nPlease enter the GPA and credit hours for your second class: ";
    cin >> gradeForClass2 >> creditsForClass2;
    cout << "\nPlease enter the GPA and credit hours for your third class: ";
    cin >> gradeForClass3 >> creditsForClass3;
    cout << "\nPlease enter the GPA and credit hours for your fourth class: ";
    cin >> gradeForClass4 >> creditsForClass4;
    cout << "\nPlease enter the GPA and credit hours for your fifth class: ";
    cin >> gradeForClass5 >> creditsForClass5;

    //multiply grades and points and add them up
    float sum = (gradeForClass1 * creditsForClass1)
                + (gradeForClass2 * creditsForClass2)
                + (gradeForClass3 * creditsForClass3)
                + (gradeForClass4 * creditsForClass4)
                + (gradeForClass5 * creditsForClass5);
    //divide by total credits
    float total_credits = creditsForClass1 + creditsForClass2 + creditsForClass3 + creditsForClass4 + creditsForClass5;
    float weighted_average = sum / total_credits;

    //output results
    cout << "Your GPA for last semester is " << weighted_average << endl;

}
