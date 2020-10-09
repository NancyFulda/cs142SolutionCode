#include <iostream>

using namespace std;
const int FIELD_SIZE = 10;      //we declare FIELD_SIZE as a constant
                                //so that it won't be a magic number.

// This is a function declaration. The definition will follow.
void display_field(int field_size, int cow_x, int cow_y);

// another function declaration. Note that its parameters are passed by reference.
void move_cow(int &cow_x, int &cow_y);

int main() {
    // The cow starts at position x=5, y=0
    // (Yes, these are magic numbers. So sue me.)
    int cow_x=5;
    int cow_y=0;
    string s;

    // Create a loop that causes the cow to meander across the field
    for (int i = 0; i < FIELD_SIZE; i++) {
        display_field(FIELD_SIZE, cow_x, cow_y);
        move_cow(cow_x, cow_y);
        getline(cin,s); //Pause and wait for a key press between loop iterations
    }

    cout << "The cow has arrived." << endl;
    return 0;
}

// Here's the definition of that function we saw earlier...
void display_field(int field_size, int cow_x, int cow_y) {
    //display a 'field' of X's with a single O marking the cow's location
    for (int j = 0; j < field_size; j++) {
        for (int k = 0; k < field_size; k++) {
            if (cow_x == k && cow_y == j) {
                cout << "O";
            }
            else {
                cout << "x";
            }
        }
        cout << endl;
    }
}

// and here's the definition of the other function
void move_cow(int &cow_x, int &cow_y) {
    int r = rand() % 3;            //generate a random number
    if (r == 0) cow_x--;           //if the number is 0, move left
    if (r == 1);                   //if the number is 1, no change
    if (r == 2) cow_x++;           //if the number is 2, move right
    cow_y++;                       //always move one step forward
}
