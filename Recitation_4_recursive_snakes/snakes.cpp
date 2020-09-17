#include <iostream>
using namespace std;

int snake1(int x, int y);
int snake2(int x, int y);

int snake1(int x, int y) {
    if ((x+y) % 2 == 0) return snake2(x-1,y);
    else return x+y;
}

int snake2(int x, int y) {
    if (x*y < 100) return snake1(x,y-1);
    else return 1;
}

int main() {
    int x,y;
    cout << "Enter x and y" << endl;
    cin >> x;
    cin >> y;
    cout << "The result is " << snake1(x,y) << endl;
    return 0;
}
