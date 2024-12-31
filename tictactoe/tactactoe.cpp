#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    const char playerX = 'X';
    const char playerO = 'O';
    char currentPlayer = playerX;
    int row = -1, column = -1;
    char winner = ' ';

    // Run the game for at most 9 moves
    for (int i = 0; i < 9; i++) {
        // Print the game board
        cout << "    |    |    " << endl;
        cout << " "  << board[0][0] << "  | " << board[0][1] << "  | " << board[0][2] << endl;
        cout << "____|____|____" << endl;
        cout << "    |    |    " << endl;
        cout << " "  << board[1][0] << "  | " << board[1][1] << "  | " << board[1][2] << endl;
        cout << "____|____|____" << endl;
        cout << "    |    |    " << endl;
        cout << " "  << board[2][0] << "  | " << board[2][1] << "  | " << board[2][2] << endl;
        cout << "    |    |    " << endl;

        if (winner != ' ') {
            break;
        }

        cout << "Current player is " << currentPlayer << endl;

        // Input loop with validation
        while (true) {
            cout << "Enter row & column from 0-2: ";
            if (!(cin >> row >> column)) {
                cout << "Invalid input. Please enter numbers only." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (row < 0 || row > 2 || column < 0 || column > 2) {
                cout << "Row and column must be between 0 and 2. Please try again." << endl;
            } else if (board[row][column] != ' ') {
                cout << "This spot is already taken. Please choose another." << endl;
            } else {
                break; // Valid input
            }
        }

        // Update the board and switch players
        board[row][column] = currentPlayer;
        currentPlayer = (currentPlayer == playerX) ? playerO : playerX;

        // Check for a winner
        // Horizontal checks
        for (int row = 0; row < 3; row++) {
            if (board[row][0] != ' ' && board[row][0] == board[row][1] && board[row][1] == board[row][2]) {
                winner = board[row][0];
                break;
            }
        }
        // Vertical checks
        for (int column = 0; column < 3; column++) {
            if (board[0][column] != ' ' && board[0][column] == board[1][column] && board[1][column] == board[2][column]) {
                winner = board[0][column];
                break;
            }
        }
        // Left diagonal
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            winner = board[0][0];
        }
        // Right diagonal
        else if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            winner = board[0][2];
        }

        if (winner != ' ') {
            cout << "Player " << winner << " wins!" << endl;
            return 0;
        }
    }

    cout << "It's a draw!" << endl;
    return 0;
}
