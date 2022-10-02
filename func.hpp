#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;
//Hello//
class Player{
    string player;
    int count;
    static int counter;
    static int position;
    void progress(int dice) {
        count += dice;
        cout << "You are now at " << count << endl;
    }    
public: 
    Player(string nam);
    void roll_die();
    void ladder();
    void snake();
    void win(int tries);
    ~Player();
};