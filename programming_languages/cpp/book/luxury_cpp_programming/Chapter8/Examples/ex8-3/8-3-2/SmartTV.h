#ifndef SMARTTV_H
#define SMARTTV_H

#include "WideTV.h"
#include <string>
using namespace std;

// WideTV 클래스를 상속받는 SmartTV 클래스를 선언합니다.
/*
[public 접근제어자로 상속 시]
기본 클래스의 public 멤버는 파생 클래스에서도 public 멤버로 상속됩니다. protected 멤버는 파생 클래스에서 protected 멤버로 상속됩니다.
기본 클래스의 public 멤버: 파생 클래스에서 public 멤버로 접근 가능합니다.
기본 클래스의 protected 멤버: 파생 클래스에서 protected 멤버로 접근 가능합니다.
기본 클래스의 private 멤버: 파생 클래스에서 접근할 수 없습니다.

[protected 접근제어자로 상속 시]
기반 클래스의 public 멤버와 protected 멤버는 파생 클래스에서 모두 protected 멤버로 상속됩니다.
기반 클래스의 public 멤버: 파생 클래스에서 protected 멤버로 접근 가능합니다.
기반 클래스의 protected 멤버: 파생 클래스에서 protected 멤버로 접근 가능합니다.
기반 클래스의 private 멤버: 파생 클래스에서 접근할 수 없습니다.

[private 접근제어자로 상속 시]
기반 클래스의 public 멤버와 protected 멤버는 파생 클래스에서 모두 private 멤버로 상속됩니다.
기반 클래스의 public 멤버: 파생 클래스에서 private 멤버로 접근 가능합니다.
기반 클래스의 protected 멤버: 파생 클래스에서 private 멤버로 접근 가능합니다.
기반 클래스의 private 멤버: 파생 클래스에서 접근할 수 없습니다.
*/
class SmartTV : public WideTV {
private:
    string ipAddr;  // 인터넷 주소를 저장하는 private 멤버 변수
public:
    SmartTV(string ipAddr, int size);  // SmartTV 생성자 선언
    string getIpAddr();  // 인터넷 주소를 반환하는 멤버 함수 선언
};

#endif // SMARTTV_H
