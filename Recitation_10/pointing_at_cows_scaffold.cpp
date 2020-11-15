#include <iostream>
#include <string>
#include <vector>
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
};

cow::cow() {
    cout << "Please name this cow: ";
    cin >> name;
}

cow::cow(string name) { this->name = name; }
void cow::setName(string name) {
    this->name = name;
}

string cow::getName() {
    return name;
}

void print_the_cows(vector<cow *> theCows) {
    for (unsigned i = 0; i < theCows.size(); i++) {
        cout << (*theCows[i]).getName() << endl;
    }
}

int main()
{
    vector<cow *> myCows;
    for (int i = 0; i < 5; i++) {
        //TODO: Add 5 new cows
    }
    print_the_cows(myCows);
    
