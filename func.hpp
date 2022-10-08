#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;
//Hello//
class Player{
    string player;
    int count;
    int counter;
    static int position;
    bool won;
    void progress(int dice) {
        count += dice;
        counter = 0;
        cout << "You are now at " << count << endl;
    }    
public: 
    Player(string nam);
    void roll_die();
    void ladder();
    void snake();
    bool win(int tries);
    ~Player();
    int getPosition(); 
};