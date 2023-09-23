/*
7. 핸드폰을 나타내는 CellPhone 클래스를 작성하여 보자. 핸드폰의 상태는 전화번호(number), 모델명(model), 색상(color)로 나타낸다.
이것들은 멤버 변수로 정의한다. 전원을 끄고 켜는 멤버 함수 setOn()도 추가하여 보자. CellPhone 객체를 생성하여서 다음과 같이 테스트하라.
*/
#include <iostream>
#include <string>
using namespace std;

class CellPhone {
public:
    bool on;
    string number;
    string model;
    string color;

    void setOn(bool power) {
        on = power;
    }
};

int main() {
    CellPhone obj;

    obj.number = "010-1234-5678";
    obj.model = "Galaxy";
    obj.color = "Black";
    obj.setOn(true);

    cout << "Cellphone1:" << endl;
    cout << obj.number << endl;
    cout << obj.model << endl;
    cout << obj.color << endl;
    cout << boolalpha << obj.on << endl;

    return 0;
}
