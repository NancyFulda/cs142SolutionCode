#include <iostream>
using namespace std;

const int BOARD_SIZE = 3;

// Initialize all board cells to empty (i.e., '-')
void initialize_board(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int row = 0; row < BOARD_SIZE; ++row) {
        for (int col=0; col < BOARD_SIZE; ++col) {
            board[row][col] = '-';
        }
    }
}

// Draw the board to the console
void draw_board(char board[BOARD_SIZE][BOARD_SIZE]) {
    // Print heading
    cout << endl << "BOARD" << endl;

    for (int row = 0; row < BOARD_SIZE; ++row) {
        // Print row values
        for (int col = 0; col < BOARD_SIZE; ++col) {
            cout << board[row][col] << ' ';
        }

        // End each row with a newline
        cout << endl;
    }

    // Print newline after the board
    cout << endl;
}

// Return 'x' if the x player won
// Return 'o' if the o player won
// Return '-' if nobody won yet
char winner(char board[BOARD_SIZE][BOARD_SIZE]) {

    // TODO - write this function

}

// Return true if the game is over, and false if it is not
bool is_game_over(char board[BOARD_SIZE][BOARD_SIZE]) {
    return (winner(board) != '-');
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!" << endl;

    char board[BOARD_SIZE][BOARD_SIZE];

    initialize_board(board);

    char player = 'x';
    while (!is_game_over(board)) {
        draw_board(board);

        cout << player << ": ";

        int row = 0;
        int col = 0;
        cin >> row >> col;

        board[row][col] = player;

        if (player == 'x') {
            player = 'o';
        }
        else {
            player = 'x';
        }
    }

    draw_board(board);

    cout << endl << "The winner is " << winner(board) << "!" << endl;

    return 0;
}
