/*
2. 컴퓨터를 나타내는 클래스 Computer을 작성한다. Computer는 이름(name), 메모리용량(RAM), CPU속도(cpu_speed)를 나타내는 변수를 가지고 있다.
Computer는 정보를 설정하는 함수 setComputer(name, RAM,cpu_speed)와 정보를 출력하는 함수 print()도 가지고 있다.
Computer의 객체obj를 생성하고 여기에 {"오피스컴퓨터",8,4.2}를 저장해보자.
TIP 이름은 문자열로, 메모리 용량은 정수로, CPU속도는 실수형 변수로 나타낸다.
*/
#include <iostream>
#include <string>
using namespace std;

class Computer {
private:
    string name;
    int RAM;
    double cpu_speed;

public:
    void setComputer(string newName, int newRAM, double newCpuSpeed) {
        name = newName;
        RAM = newRAM;
        cpu_speed = newCpuSpeed;
    }

    void print() {
        cout << "이름: " << name << endl;
        cout << "RAM: " << RAM << endl;
        cout << "CPU 속도: " << cpu_speed << endl;
    }
};

int main() {
    Computer obj;

    obj.setComputer("오피스 컴퓨터", 8, 4.2);
    obj.print();

    return 0;
}
