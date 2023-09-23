/*
1. 사람을 나타내는 클래스 Person을 작성한다. Person은 이름(name), 나이(age)를 나타내는 변수를 가지고 있다.
Person은 정보를 설정하는 함수 setPerson(name,age)과 정보를 출력하는 함수 print()도 가지고 있다.
Person의 객체 obj를 생성하고 여기에 "김철수",21을 저장해보자
TIP 이름은 문자열로, 나이는 정수형 변수로 나타낸다.
*/
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setPerson(string newName, int newAge) {
        name = newName;
        age = newAge;
    }

    void print() {
        cout <<"이름: " << name << endl;
        cout <<"나이: " << age  << endl;
    }
};

int main() {
    Person obj;

    obj.setPerson("김철수", 21);

    obj.print();

    return 0;
}

