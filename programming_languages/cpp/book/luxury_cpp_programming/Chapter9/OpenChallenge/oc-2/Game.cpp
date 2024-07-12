// Game.cpp
#include "Game.h"
#include <iostream>
using namespace std;

Game::Game() {
    human = new Human(0, 0, 1);
    monster = new Monster(5, 5, 2);
    food = new Food(9, 9, 1);
}

Game::~Game() {
    delete human;
    delete monster;
    delete food;
}

void Game::play() {
    cout << "** Human의 Food 먹기 게임을 시작합니다. **" << endl;
    draw();

    while (true) {
        human->move();
        if (human->collide(food)) {
            cout << "Human is Winner!!!" << endl;
            break;
        }
        monster->move();
        if (monster->collide(human)) {
            cout << "Human is Loser!!!" << endl;
            break;
        }
        if (monster->collide(food)) {
            cout << "Monster is Winner!!!" << endl;
            break;
        }
        food->move();
        draw();
    }
}

void Game::draw() {
    char board[10][20] = { 0 };
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 20; j++)
            board[i][j] = '-';

    board[human->getY()][human->getX()] = human->getShape();
    board[monster->getY()][monster->getX()] = monster->getShape();
    board[food->getY()][food->getX()] = food->getShape();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}
