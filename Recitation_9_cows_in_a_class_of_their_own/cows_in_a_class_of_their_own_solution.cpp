#include <iostream>

using namespace std;
const int FIELD_SIZE = 10;
const int ARRAY_SIZE = 5;
const int START_X = 5;
const int START_Y = 0;

class cow {
private:
    int x, y;

public:
    cow();
    void move();
    int get_x() {return x;}
    int get_y() {return y;}
};

cow::cow() {
    this->x = START_X;
    this->y = START_Y;
}

void cow::move() {
    int r = rand() % 3;            //generate a random number
    if (r == 0) this->x--;         //if the number is 0, move left
    if (r == 2) this->x++;         //if the number is 2, move right
    this->y++;                     //always move one step forward
}

void display_field(int field_size, cow cows[], int array_size);
void move_the_cows(cow cows[], int array_size);

int main() {
    // Initialize the cows
    cow cows[ARRAY_SIZE];

    string s;

    // Create a loop that causes the cow to meander across the field
    for (int i = 0; i < FIELD_SIZE; i++) {
        display_field(FIELD_SIZE, cows, ARRAY_SIZE);
        move_the_cows(cows, ARRAY_SIZE);
        getline(cin,s); //Pause and wait for a key press between loop iterations
    }

    cout << "The cows have arrived." << endl;
    return 0;
}

// Here's the definition of that function we saw earlier...
void display_field(int field_size, cow cows[], int array_size) {
    //display a 'field' of X's with a single O marking the cow's location
    for (int j = 0; j < field_size; j++) {
        for (int k = 0; k < field_size; k++) {
            bool flag = false;
            for (int z = 0; z<array_size; z++) {
                if (flag == false && cows[z].get_x() == k && cows[z].get_y() == j) {
                    cout << "O";
                    flag = true;
                }
            }
            if (flag == false) {
                cout << "x";
            }
        }
        cout << endl;
    }
}

// and here's the definition of the other function
void move_the_cows(cow cows[], int array_size) {
    for (int i=0; i<array_size; i++) {
        cows[i].move();
    }
}
