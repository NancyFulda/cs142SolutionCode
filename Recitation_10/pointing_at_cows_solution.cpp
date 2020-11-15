#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

class cow {
private:
    int x, y;
    string name;
public:
    cow();
    cow(string name);
    void setName(string name);
    string getName();
    string toString();
};

cow::cow() {
    cout << "Please name this cow: ";
    cin >> name;
    x = rand()%5;
    y = rand()%5;
}

cow::cow(string name) {
    this->name = name;
    x = rand()%5;
    y = rand()%5;
}

void cow::setName(string name) {
    this->name = name;
}

string cow::getName() {
    return name;
}

string cow::toString() {
    string outputstr = "This cow's name is ";
    outputstr += name;
    outputstr += ". The cow is located at coordinates: ";
    outputstr += to_string(x) + ", " + to_string(y) + ".";
    return outputstr;
}

void print_the_cows(vector<cow *> theCows) {
    for (unsigned i = 0; i < theCows.size(); i++) {
        cout << (*theCows[i]).toString() << endl;
    }
}

int main() {
    srand(time(0));
    vector<cow *> myCows;

    // Create five new cows
    for (int i = 0; i < 5; i++) {
        cow *newCow = new cow("Fred");
        myCows.push_back(newCow);
    }

    // Display all five cows
    print_the_cows(myCows);

    // Here is an example of how to delete the cow objects
    // When you are finished with them.
    cow *tmp = myCows.at(myCows.size()-1);
    myCows.pop_back();
    delete tmp;
   
    //There are two ways to access the toString() function
    //cout << tmp->toString();
    //cout << (*tmp).toString(); 
}
