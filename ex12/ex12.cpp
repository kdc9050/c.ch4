/*
12. 시간을 나타내는 Time 클래스를 작성해보자. Time 클래스는 시(time), 분(minute), 초(second)를 멤버 변수로 가진다.
또 시간을 설정하는 setTime() 함수와 현재 시간을 출력하는 print() 함수를 가지고 있다.
객체를 하나 생성하여 다음과 같이 테스트 하라.
*/
#include<iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    void setTime(const int h, const int m, const int s) {
        hour = h;
        minute = m;
        second = s;
    }

    void print() const {
            cout << "0" << hour << ":" << minute << ":"<< second << endl;
    }
};

int main() {
    Time time;

    time.setTime(7, 10, 20);
    time.print();

    return 0;
}
