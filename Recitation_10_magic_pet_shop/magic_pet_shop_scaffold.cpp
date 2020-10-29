#include <iostream>
using namespace std;

// Useful web links for ASCII art:
// https://www.asciiart.eu/mythology/gryphon
// https://www.asciiart.eu/mythology/dragons
// https://www.asciiart.eu/mythology/unicorns

class MagicPet {
private:
    string type = "gryphon";
    string name = "UNNAMED_PET";
    string color;
    string eyeColor;
    string size;
public:
    MagicPet(string userChoice) {}
    void Render() {cout << "rendering..." << endl;}
    string Description() {return "description";}
    void SetName(string name) {this->name = name;}
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

    string petName;
    cout << endl;
    cout << "What do you want to name your pet?" << endl;
    cin >> petName;
    pet.SetName(petName);

    return 0;
}

