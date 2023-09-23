/*
6. 직원을 나타내는 Employee 클래스를 작성하여 보자. 직원은 이름, 나이, 월급을 멤버 변수로 가지고 있다.
Employee 객체를 생성하여서 다음과 같이 테스트하라.
*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int age;
    int salary;
};

int main() {
    Employee obj;

    obj.name = "김철수";
    obj.age = 38;
    obj.salary = 2000000;

    cout << "Employee1:" << endl;
    cout << obj.name << endl;
    cout << obj.age << endl;
    cout << obj.salary << endl;

    return 0;
}
