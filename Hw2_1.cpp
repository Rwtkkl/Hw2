#include<iostream>  
#include <cstdlib> 
#include <ctime>   
#include "Hw2_Head.h"


GamblingGame::GamblingGame() {
    cout << "***** ���� ������ �����մϴ�. *****\n";
    srand(time(NULL));
}


void GamblingGame::nameinput() {
    string name;
    cout << "ù��° ���� �̸�>>";
    cin >> name;
    p[0].inputname(name);
    cout << "�ι�° ���� �̸�>>";
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
        n += "�� �¸�!!";
        return n;
    }
    else
        return "�ƽ�����!";
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

        if (n == "�� �¸�!!") {
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