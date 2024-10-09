#include<iostream>  
#include <cstdlib> 
#include <ctime>   
#include "Hw2_Head.h"


GamblingGame::GamblingGame() {
    cout << "***** 갬블링 게임을 시작합니다. *****\n";
    srand(time(NULL));
}


void GamblingGame::nameinput() {
    string name;
    cout << "첫번째 선수 이름>>";
    cin >> name;
    p[0].inputname(name);
    cout << "두번째 선수 이름>>";
    cin >> name;
    p[1].inputname(name);
}


string GamblingGame::ranNum(string n) {
    int r[3];
    cout << "\t\t";
    for (int i = 0; i < 3; i++) {
        r[i] = rand() % 3;
        cout << r[i] << "\t";
    }

    if (r[0] == r[1] && r[0] == r[2]) {
        n += "님 승리!!";
        return n;
    }
    else
        return "아쉽군요!";
}


void GamblingGame::startGame() {
    string n;
    int i = 0;
    while (true) {
        string m;
        cout << p[i % 2].returnname() << ":<Enter>" << endl;
        getline(cin, n);
        m = p[i % 2].returnname();
        n = ranNum(n);

        if (n == "님 승리!!") {
            cout << m + n;
            break;
        }
        else
            cout << n << endl;
        i++;
    }
}


void Player::inputname(string n) {
    name = n;
}