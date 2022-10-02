#include "func.hpp"
//Hello//
int Player::counter;
int Player::position;

int main() {
    int num;
    string n1;
    string n2;
    string n3;
    string n4;
    int q1 = 0;
    int q2 = 0;
    int q3 = 0;
    int q4 = 0;
    int turn_count = 0;
    int tries = 0;
    string ch;
    cout << "How many players would like to play? ";
    cin >> num;
    cout << "\n"; 
    if (num == 2) {
        cout << "Enter player 1 name: ";
        cin >> n1;
        cout << "\nEnter player 2 name: ";
        cin >> n2;
    } else if (num == 3) {
        cout << "Enter player 1 name: ";
        cin >> n1;
        cout << "\nEnter player 2 name: ";
        cin >> n2;
        cout << "\nEnter player 3 name: ";
        cin >> n3;
    } else if (num == 4) {
        cout << "Enter player 1 name: ";
        cin >> n1;
        cout << "\nEnter player 2 name: ";
        cin >> n2;
        cout << "\nEnter player 3 name: ";
        cin >> n3;
        cout << "\nEnter player 4 name: ";
        cin >> n4;
    }
    Player player1(n1);
    Player player2(n2);
    Player player3(n3);
    Player player4(n4);
    while (tries < 1) {
        int turn = turn_count%num + 1;
        if (turn == 1) {
            if (q1 < 1) {
                cout << "Do you want to play or quit? 'Y' to roll and 'N' to roll over.";
                cin >> ch;
                cout << endl;
                if (ch == "Y" || ch == "y") {
                    ch = " ";
                    cout << "Player 1 throws the dice: ";
                    player1.roll_die();
                    player1.ladder();
                    player1.snake();
                    player1.win(tries);
                    turn_count++;
                    if (tries == 1) {
                        q1++;
                        player1.~Player();
                    }
                }
            }
        } else if (turn == 2) {
            if (q2 < 1) {
                cout << "Do you want to play or quit? 'Y' to roll and 'N' to roll over.";
                cin >> ch;
                cout << endl;
                if (ch == "Y" || ch == "y") {
                    ch = " ";
                    cout << "Player 2 throws the dice: ";
                    player2.roll_die();
                    player2.ladder();
                    player2.snake();
                    player2.win(tries);
                    turn_count++;
                    if (tries == 1) {
                        q2++;
                        player2.~Player();
                    }
                }
            }
        } else if (turn == 4) {
            if (q3 < 1) {
                cout << "Do you want to play or quit? 'Y' to roll and 'N' to roll over.";
                cin >> ch;
                cout << endl;
                if (ch == "Y" || ch == "y") {
                    ch = " ";
                    cout << "Player 3 throws the dice: ";
                    player3.roll_die();
                    player3.ladder();
                    player3.snake();
                    player3.win(tries);
                    turn_count++;
                    if (tries == 1) {
                        q3++;
                        player3.~Player();
                    }
                }
            }
        } else if (turn == 4) {
            if (q4 < 1) {
                cout << "Do you want to play or quit? 'Y' to roll and 'N' to roll over.";
                cin >> ch;
                cout << endl;
                if (ch == "Y" || ch == "y") {
                    ch = " ";
                    cout << "Player 4 throws the dice: ";
                    player4.roll_die();
                    player4.ladder();
                    player4.snake();
                    player4.win(tries);
                    turn_count++;
                    if (tries == 1) {
                        q4++;
                        player4.~Player();
                    }
                }
            }
        }      
    }
}