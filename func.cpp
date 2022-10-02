#include "func.hpp"
//Hello//

Player::Player(string nam) : player(nam) {
        count = 1;
    }
void Player::roll_die() {
    while(counter < 3) {
        if (counter == 3) {
            counter = 0;
            cout << "Unlucky! 3 sixes in a row. Turn cancelled.";
            break;
        }
        int dice = rand()%6 + 1;
        if (dice == 6) {
            counter++;
            roll_die();
        } else {
            progress(dice);
            break;
        }
    }
}
void Player::ladder() {
    if (count == 4) {
        count = 14;
        cout << "You stepped on a ladder! You have moved to " << count << " position." << endl;
    } else if (count == 9) {
        count = 31;
        cout << "You stepped on a ladder! You have moved to " << count << " position." << endl;
    } else if (count == 20) {
        count = 36;
        cout << "You stepped on a ladder! You have moved to " << count << " position." << endl;
    } else if (count == 28) {
        count = 84;
        cout << "You stepped on a ladder! You have moved to " << count << " position." << endl;
    } else if (count == 40) {
        count = 59;
        cout << "You stepped on a ladder! You have moved to " << count << " position." << endl;
    } else if (count == 51) {
        count = 67;
        cout << "You stepped on a ladder! You have moved to " << count << " position." << endl;
    } else if (count == 63) {
        count = 81;
        cout << "You stepped on a ladder! You have moved to " << count << " position." << endl;
    } else if (count == 71) {
        count = 91;
        cout << "You stepped on a ladder! You have moved to " << count << " position." << endl;
    }
}
void Player::snake() {
    if (count == 17) {
        count = 7;
        cout << "Oops! You stepped on a snake. You have moved to " << count << " position." << endl; 
    } else if (count == 54) {
        count = 34;
        cout << "Oops! You stepped on a snake. You have moved to " << count << " position." << endl; 
    } else if (count == 62) {
        count = 19;
        cout << "Oops! You stepped on a snake. You have moved to " << count << " position." << endl; 
    } else if (count == 64) {
        count = 60;
        cout << "Oops! You stepped on a snake. You have moved to " << count << " position." << endl; 
    } else if (count == 87) {
        count = 24;
        cout << "Oops! You stepped on a snake. You have moved to " << count << " position." << endl; 
    } else if (count == 93) {
        count = 73;
        cout << "Oops! You stepped on a snake. You have moved to " << count << " position." << endl; 
    } else if (count == 99) {
        count = 78;
        cout << "Oops! You stepped on a snake. You have moved to " << count << " position." << endl; 
    }
}
void Player::win(int tries) {
    if (count >= 100) {
        cout << "Congrats " << player << " you have beaten the game!" << endl;
        cout << "You came at position " << position << "." << endl;
        position++;
        tries++;
    }
}
Player::~Player() {
        cout << "Player " << player << " is now removed from the game";
    }