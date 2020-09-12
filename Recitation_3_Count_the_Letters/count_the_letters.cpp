#include <iostream>
#include <string>
using namespace std;

int main() {
    string userName;
    cout << "What is your name?" << endl;

    // This will grab the user's first name, but not middle or last names
    // cin >> userName;

    // This will grab the entire line of input, including first, last and middle names
    getline(cin, userName);

    // This line works if there are no spaces in the name
    cout << "There are " << userName.length() << " letters in your name." << endl;

    // If the user entered both a first and last name, then you'll
    // need to subtract the spaces when counting letters
    // (This requires a for loop, which we haven't learned about yet
    // so this code is only for the curious...)
    int lettersInName = userName.length();
    int numberOfSpaces = 0;
    for (int i=0; i<userName.length(); i++) {
        if (userName.at(i) == ' ') numberOfSpaces+= 1;
    }
    lettersInName -= numberOfSpaces;
    cout << "Counting more precisely, there are " << lettersInName << " letters in your name." << endl;

    // --------------------------------------
    // BONUS MATERIAL
    // --------------------------------------

    // Appending text to the name
    const string suffixToAppend = "ina";
    cout << "Is it ok if I call you " << userName + suffixToAppend << "?" << endl;

    // Reversing the name
    // (this requires some tools we haven't covered in Zybooks yet)
    string reversedUserName = "";
    for (int i=userName.length()-1; i>=0; i--) {
        reversedUserName += userName.at(i);
    }
    cout << "When reversed, your name looks like this: " << reversedUserName << endl;

    return 0;
}
