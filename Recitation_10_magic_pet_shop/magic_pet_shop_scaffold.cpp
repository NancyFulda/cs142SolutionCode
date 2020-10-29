#include <iostream>
using namespace std;


class MagicPet {
private:
    string type = "gryphon";
public:
    MagicPet(string userChoice) {}
    void Render() {cout << "rendering..." << endl;}
    string Description() {return "description";}
};

int main() {

    cout << "Welcome to the magic pet shop! What kind of pet would you like?" << endl;
    cout << "(a) Gryphon" << endl;
    cout << "(b) Unicorn" << endl;
    cout << "(c) Dragon" << endl;

    string userChoice;
    cin >> userChoice;

    if (userChoice == "a" or userChoice == "b" or userChoice == "c") {
        // Do nothing, this is valid input
    } else {
        cout << "I'm so sorry! I don't know how to create that kind of pet." << endl;
    }

    MagicPet pet(userChoice);
    cout << endl;
    cout << "Okay, here's your pet!" << endl;

    pet.Render();
    cout << pet.Description() << endl;

    return 0;
}
