#include "GamblingGame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// GamblingGame 클래스의 구현부

// string 타입 변수의 참조를 매개변수로 받는 생성자: 플레이어의 이름을 받아 객체를 초기화합니다.
GamblingGame::GamblingGame(const string& name1, const string& name2) {
    players[0] = Player(name1);  // GablingGame 클래스의 구현부에 선언됨 players 배열(array) 객체의 첫 번째 원소를 Player(name1)으로 초기화
    players[1] = Player(name2);  // GablingGame 클래스의 구현부에 선언됨 players 배열(array) 객체의 첫 번째 원소를 Player(name2)으로 초기화
    srand(static_cast<unsigned int>(time(nullptr))); // 랜덤 넘버 생성기 초기화 (nullptr 대신 0을 사용해도됨)
    /*
        - srand(static_cast<unsigned int>(time(nullptr))); 이 코드는 C++에서 랜덤 넘버 생성기를 초기화하는 표준적인 방법입니다. 이 코드는 난수 생성에 필요한 시드(seed) 값을 설정하는 역할을 합니다.
        - srand
            : srand() 함수는 C/C++ 표준 라이브러리의 일부로, 난수 생성기의 초기 시드 값을 설정하는 함수입니다. 
            : 이 시드 값은 rand() 함수가 생성하는 난수의 시작점을 결정합니다. 같은 시드 값으로 srand()를 호출하면 rand()는 매번 같은 난수 시퀀스를 생성합니다. 
            : 따라서, 매번 다른 시퀀스를 얻기 위해서는 매번 다른 시드 값을 제공해야 합니다.
        - time(nullptr)
            : 이 함수는 현재 시간을 시간 타임스탬프 형태로 반환합니다. 이 값은 1970년 1월 1일 자정 이후로 지난 초(second)의 총 수를 나타냅니다. 
            : nullptr은 time() 함수에 특정 변수를 넘겨주지 않고 현재 시간을 얻고자 할 때 사용됩니다.
        - static_cast<unsigned int>()
            : 이 함수는 C++의 타입 캐스팅 연산자로, 한 타입의 변수를 다른 타입으로 명시적으로 변환합니다. 
            : 여기서는 time_t 타입(대개 long이나 long long)의 반환 값을 unsigned int로 변환하여 srand() 함수의 입력으로 적합하게 만듭니다.
        - 전체적인 의미
            : 따라서, srand(static_cast<unsigned int>(time(nullptr))); 코드는 현재 시간을 기반으로 한 유니크한 시드 값을 사용하여 난수 생성기를 초기화합니다. 
            : 이렇게 하면 프로그램을 실행할 때마다 rand() 함수가 생성하는 난수 패턴이 달라지므로, 매번 다른 난수 시퀀스를 생성할 수 있습니다. 
            : 이는 게임이나 시뮬레이션에서 예측 불가능한 결과를 필요로 할 때 유용하게 사용됩니다.
    */
}

// 게임을 시작하고 진행하는 함수
void GamblingGame::startGame() {
    cout << "***** 갬블링 게임을 시작합니다. *****\n";
    while (true) {
        for (auto& player : players) {
            /* 
                - player : players
                    : C++11 이후에서 사용할 수 있는 범위 기반 for 루프(range-based for loop)의 한 예입니다. 
                    : 이 구문은 컨테이너의 모든 요소를 순회하며 각 요소에 대해 반복 작업을 수행할 때 사용됩니다. 
                    : 여기서의 코드는 players 배열 또는 컨테이너의 각 요소를 player라는 변수로 참조하여 루프 내에서 사용하도록 설정합니다
                - auto
                    : 이 키워드는 C++11에서 도입된 자동 타입 추론을 가능하게 합니다. 
                    : 컴파일러에게 변수의 타입을 추론하도록 지시하여, 명시적으로 타입을 선언할 필요가 없게 해줍니다. 
                    : 이는 코드를 더 깔끔하게 만들고, 특히 복잡한 타입 이름을 반복해서 쓰는 것을 피할 수 있도록 도와줍니다.
                - & 
                    : 이 기호는 참조자를 의미합니다. auto&는 변수 player가 players 컨테이너의 각 요소를 참조형으로 선언하게 합니다. 
                    : 이는 각 반복에서 컨테이너의 요소를 복사하지 않고, 원본 요소에 직접 접근하게 해서 성능을 개선합니다. 
                    : 또한, 이를 통해 루프 내에서 요소의 값을 변경할 경우 원본 컨테이너에도 해당 변경이 적용됩니다.
            */
            cout << player.getName() << ": <Enter>";
            cin.get(); // 사용자가 Enter 키를 누를 때까지 대기

            int result[3] = {  // int 타입의 값을 세 개 저장할 수 있는 배열 정의
                rand() % 3,  // 0~2 사이의 랜덤 숫자 생성
                rand() % 3, 
                rand() % 3
            };

            cout << "\t" << result[0] << "\t" << result[1] << "\t" << result[2];
            if (result[0] == result[1] && result[1] == result[2]) {  // 모든 숫자가 같은 경우
                cout << "\t" << player.getName() << "님 승리!\n";
                return; // 게임 종료 (승리하는 플레이어가 등장하면 코드 종료)
            } else {
                cout << "\t아쉽군요!\n";
            }
        }
    }
}
