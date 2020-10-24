#include <iostream>
using namespace std;

const int BOARD_SIZE = 3;

void initialize_board(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int row = 0; row < BOARD_SIZE; ++row) {
        for (int col=0; col < BOARD_SIZE; ++col) {
            board[row][col] = '-';
        }
    }
}

void draw_board(char board[BOARD_SIZE][BOARD_SIZE]) {
    cout << endl << "BOARD" << endl;
    for (int row = 0; row < BOARD_SIZE; ++row) {
        for (int col = 0; col < BOARD_SIZE; ++col) {
            cout << board[row][col] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

char check_rows(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int row = 0; row < BOARD_SIZE; ++row) {
        char firstColumnPlayer = board[row][0];

        if (firstColumnPlayer != '-') {
            bool foundWinner = true;
            for (int col = 1; col < BOARD_SIZE; ++col) {
                if (board[row][col] != firstColumnPlayer) {
                    foundWinner = false;
                    break;
                }
            }

            if (foundWinner) {
                return firstColumnPlayer;
            }
        }
    }

    return '-';
}

char check_columns(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int col = 0; col < BOARD_SIZE; ++col) {
        char firstRowPlayer = board[0][col];

        if (firstRowPlayer != '-') {
            bool foundWinner = true;
            for (int row = 1; row < BOARD_SIZE; ++row) {
                if (board[row][col] != firstRowPlayer) {
                    foundWinner = false;
                    break;
                }
            }

            if (foundWinner) {
                return firstRowPlayer;
            }
        }
    }

    return '-';
}

char check_tl_br_diagonal(char board[BOARD_SIZE][BOARD_SIZE]) {
    char topLeftPlayer = board[0][0];

    bool foundWinner = true;
    for (int i = 1; i < BOARD_SIZE; ++i) {
        int row = i;
        int col = i;

        if (board[row][col] != topLeftPlayer) {
            foundWinner = false;
            break;
        }
    }

    if (foundWinner) {
        return topLeftPlayer;
    }
    else {
        return '-';
    }
}

char check_bl_tr_diagonal(char board[BOARD_SIZE][BOARD_SIZE]) {
    char bottomLeftPlayer = board[BOARD_SIZE - 1][0];

    bool foundWinner = true;
    for (int i = 1; i < BOARD_SIZE; ++i) {
        int row = BOARD_SIZE - (i + 1);
        int col = i;

        if (board[i][i] != bottomLeftPlayer) {
            foundWinner = false;
            break;
        }
    }

    if (foundWinner) {
        return bottomLeftPlayer;
    }
    else {
        return '-';
    }
}

char winner(char board[BOARD_SIZE][BOARD_SIZE]) {
    char player = check_rows(board);

    if (player == '-') {
        player = check_columns(board);
    }

    if (player == '-') {
        player = check_tl_br_diagonal(board);
    }

    if (player == '-') {
        player = check_bl_tr_diagonal(board);
    }

    return player;
}

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
