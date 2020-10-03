#include <iostream>
#include "stdlib.h"
#include <cctype>
using namespace std;

const int STRING_BEGIN = 0;

// --------------------------------------------------------
// These two functions will help us process user input
// --------------------------------------------------------

int extractNumber(string inputString, int currentIndex) {
    // extracts consecutive numerical characters and
    // returns the corresponding integer value
    int i = currentIndex;
    string theNumber = "";
    while (i < inputString.length() && isdigit(inputString.at(i))) {
        theNumber = theNumber + inputString.at(i);
        i++;
    }
    //the function stoi() converts a string of digits to an integer value
    return stoi(theNumber);
}

int findSecondNumber(string inputString) {
    // This function locates the starting index of the
    // second of two numbers contained in inputString

    // First, advance through the characters of the string
    // until the first non-numerical character is found.
    // (This means we've reached the end of the first number)
    int i = STRING_BEGIN;
    while (i < inputString.length() && isdigit(inputString.at(i))) {
        i++;
    }

    // Second, continue advancing through the characters of
    // the string until the next numerical character is found.
    // (This means we've reached the beginning of the second number)
    while (i < inputString.length() && !isdigit(inputString.at(i))) {
        i++;
    }

    // Return the index at which the second number began
    return i;
}


// --------------------------------------------------------
// This is where the real meat of the program begins
// --------------------------------------------------------

int main() {
    string userResponse;
    int minTrees;
    int maxTrees;
    int minBranches;
    int maxBranches;
    int minLeaves;
    int maxLeaves;

    cout << "Welcome to \"Count the Leaves\"!" << endl;
    cout << "Please enter the minimum and maximum number of trees." << endl;

    // We're going to assume the user gave us a perfectly
    // formatted input in the form of "min - max".
    // (No input validation required)
    int index;
    getline(cin, userResponse);
    minTrees = extractNumber(userResponse, STRING_BEGIN);
    index = findSecondNumber(userResponse);
    maxTrees = extractNumber(userResponse, index);

    cout << "Please enter the minimum and maximum branches per tree." << endl;
    getline(cin, userResponse);
    minBranches = extractNumber(userResponse, STRING_BEGIN);
    index = findSecondNumber(userResponse);
    maxBranches = extractNumber(userResponse, index);

    cout << "Please enter the minimum and maximum leaves per branch." << endl;
    getline(cin, userResponse);
    minLeaves = extractNumber(userResponse, STRING_BEGIN);
    index = findSecondNumber(userResponse);
    maxLeaves = extractNumber(userResponse, index);

    // Using the min and max values provided by the user,
    // generate a random number of trees for our forest
    int numTrees = rand()%(maxTrees - minTrees + 1) + minTrees;
    cout << "Calculating for " << numTrees << " trees... " << endl;

    // Now use a pair of nested for loops to calculate the number
    // of branches on each tree and the number of leaves on each
    // branch. The "sum" variable will keep track of how many
    // leaves we've counted in all.
    int sum = 0;
    int numBranches;
    int numLeaves;
    for (int i=1; i<=numTrees; i++) {
        // generate a random number of branches for this tree
        numBranches = rand()%(maxBranches - minBranches + 1) + minBranches;
        for (int j=1; j<= numBranches; j++) {
            // generate a random number of leaves for this branch
            numLeaves = rand()%(maxLeaves - minLeaves + 1) + minLeaves;
            sum += numLeaves;
        }
    }
    cout << "The forest has " << sum << " leaves in total." << endl;

    return 0;
}
