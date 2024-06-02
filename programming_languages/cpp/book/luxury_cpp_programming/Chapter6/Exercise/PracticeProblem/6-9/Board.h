#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <string>
using namespace std;

// Board 클래스 선언
class Board {
private:
    static string posts[100]; // 게시글을 저장하는 배열
    static int postCount;     // 저장된 게시글 수

public:
    static void add(const string& post); // 게시글 추가
    static void print();                 // 모든 게시글 출력
};

#endif
