#include "func.hpp"
//Hello//
int Player::position = 1;

int main() {
    srand(time(NULL));
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
    Player* player1 = new Player(n1);
    Player* player2 = new Player(n2);
    Player* player3 = new Player(n3);
    Player* player4 = new Player(n4);
    Player test("Test");
    while (tries < 1) {
        int Pos = test.getPosition();
        if (Pos == num) {
            goto jump;
        }
        int turn = turn_count%num + 1;
        if (turn == 1) {
            if (q1 < 1) {
                cout << "Do you want to play or quit? 'Y' to roll and 'N' to roll over.";
                cin >> ch;
                cout << endl;
                if (ch == "Y" || ch == "y") {
                    ch = " ";
                    cout << "Player 1 throws the dice: ";
                    player1->roll_die();
                    player1->ladder();
                    player1->snake();
                    if (player1->win(tries)) {
                        delete player1;
                        q1 = 1;
                    }
                    turn_count++;
                }
            } else {
                turn_count++;
                continue;
            }
        } else if (turn == 2) {
            if (q2 < 1) {
                cout << "Do you want to play or quit? 'Y' to roll and 'N' to roll over.";
                cin >> ch;
                cout << endl;
                if (ch == "Y" || ch == "y") {
                    ch = " ";
                    cout << "Player 2 throws the dice: ";
                    player2->roll_die();
                    player2->ladder();
                    player2->snake();
                        if (player2->win(tries) == true) {
                            delete player2;
                            q2 = 1;
                        }
                    turn_count++;
                }
            } else {
                turn_count++;
                continue;
            }
        } else if (turn == 3) {
            if (q3 < 1) {
                cout << "Do you want to play or quit? 'Y' to roll and 'N' to roll over.";
                cin >> ch;
                cout << endl;
                if (ch == "Y" || ch == "y") {
                    ch = " ";
                    cout << "Player 3 throws the dice: ";
                    player3->roll_die();
                    player3->ladder();
                    player3->snake();
                        if (player3->win(tries)) {
                            delete player3;
                            q3 = 1;
                        }            
                    turn_count++;
                }
            } else {
                turn_count++;
                continue;
            }
        } else if (turn == 4) {
            if (q4 < 1) {
                cout << "Do you want to play or quit? 'Y' to roll and 'N' to roll over.";
                cin >> ch;
                cout << endl;
                if (ch == "Y" || ch == "y") {
                    ch = " ";
                    cout << "Player 4 throws the dice: ";
                    player4->roll_die();
                    player4->ladder();
                    player4->snake();
                    if (player4->win(tries)) {
                        delete player4;
                        q4 = 1;
                    }
                    turn_count++;
                }
            } else {
                turn_count++;
                continue;
            }
        }      
    }
    jump:
        cout << "Game over." << endl;
}