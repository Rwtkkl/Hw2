#ifndef HW2_HEAD_H
#define HW2_HEAD_H
#include <string> 
using namespace std;

class Player {
    string name;
public:
    void inputname(string name);
    string returnname() { return name; };
};

class GamblingGame {
    Player* p = new Player[2];
public:
    GamblingGame();
    void nameinput();
    string ranNum(string n);
    void startGame();
    ~GamblingGame() { delete[] p; }
};


#endif