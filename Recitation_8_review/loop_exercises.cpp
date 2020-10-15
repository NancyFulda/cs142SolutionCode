#include <iostream>
#include <string>
#include <ctime>
#include <string>
using namespace std;


int main() {



    // What does this do?
    /*while (1) {
        //do nothing
    }*/




    // How about this?
    /*int i = 10;
    while(i>0) {
        cout << i << endl;
        i--;
    }*/




    // And this?
    /*int i = 10;
    while(i>0) {
        cout << i << endl;
        i++;
    }*/



    // TODO: use a loop to print out all numbers between 0 and 100
   
    
    
    // TODO: use a loop to print all numbers between 0 and 100 that are divisible by 3
  
  
  
   
    // A very weird loop example that employs randomness.
    // Try to figure out what it does.
    /*srand(time(0));
    int i;
    for(i=rand()%150; i>= 0 and i<=100; i = rand()%150) {
        cout << i << endl;
    }
    cout << i << endl;*/




    // Example: Using a loop to reverse the characters in a string
    /*string myString = "";
    cin >> myString;

    int i=0;
    int strLen =myString.length();
    string myNewString = "";
    while(i<strLen) {
        myNewString += myString.at((strLen-1)-i);
        i++;
    }
    cout << myNewString << endl;*/



    return 0;
}
