#include "Board.h"

// 정적 멤버 변수 초기화
string Board::posts[100]; 
int Board::postCount = 0;

// 게시글 추가 함수 정의
void Board::add(const string& post) {
    if (postCount < 100) {
        posts[postCount] = post;
        postCount++;
    } else {
        cout << "게시판이 가득 찼습니다. 더 이상 게시글을 추가할 수 없습니다." << endl;
    }
}

// 모든 게시글 출력 함수 정의
void Board::print() {
    cout << "******************** 게시판입니다. ********************" << endl;
    for (int i = 0; i < postCount; i++) {
        cout << i << ": " << posts[i] << endl;
    }
    cout << endl;
}
