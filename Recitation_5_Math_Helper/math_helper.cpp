#include <iostream>
using namespace std;

int Add(int x, int y) {
    return x+y;
}

int Subtract(int x, int y) {
    return x-y;
}

int Multiply(int x, int y) {
    return x*y;
}

int Divide(int x, int y) {
    // we are assuming integer division
    return x/y;
}

int main()
{
    string userQuery;
    int solution;
    int firstOperand, secondOperand;

    // prompt the user for a math question
    cout << "Welcome to Math Helper! What would you like to know?" << endl;
    getline(cin, userQuery);

    // find the location of the operator symbol in the user's query string
    int additionIndex, subtractionIndex, multiplicationIndex, divisionIndex;
    int operatorIndex;
    char desiredOperator;

    additionIndex = userQuery.find('+'); //is this an addition problem?
    subtractionIndex = userQuery.find('-'); //is this a subtraction problem?
    multiplicationIndex = userQuery.find('*'); //is this a multiplication problem?
    divisionIndex = userQuery.find('/'); //is this a division problem?

    if (additionIndex >= 0) {
        operatorIndex = additionIndex;
    } else if (subtractionIndex >= 0) {
        operatorIndex = subtractionIndex;
    } else if (multiplicationIndex >= 0) {
        operatorIndex = multiplicationIndex;
    } else if (divisionIndex >= 0) {
        operatorIndex = divisionIndex;
    } else{
        cout << "Unable to parse query." << endl;
        exit(1);
    }

    // extract the operator and operands
    desiredOperator = userQuery.at(operatorIndex);
    firstOperand = static_cast<int>(userQuery.at(operatorIndex-1)-48);
    secondOperand = static_cast<int>(userQuery.at(operatorIndex+1)-48);

    // calculate the solution
    if (desiredOperator == '+') solution = Add(firstOperand, secondOperand);
    if (desiredOperator == '-') solution = Subtract(firstOperand, secondOperand);
    if (desiredOperator == '*') solution = Multiply(firstOperand, secondOperand);
    if (desiredOperator == '/') solution = Divide(firstOperand, secondOperand);

    // display the solution to the user
    cout << firstOperand << desiredOperator << secondOperand
         << " is " << to_string(solution) << endl;

    return 0;
}
