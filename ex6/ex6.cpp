/*
6. ������ ��Ÿ���� Employee Ŭ������ �ۼ��Ͽ� ����. ������ �̸�, ����, ������ ��� ������ ������ �ִ�.
Employee ��ü�� �����Ͽ��� ������ ���� �׽�Ʈ�϶�.
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

    obj.name = "��ö��";
    obj.age = 38;
    obj.salary = 2000000;

    cout << "Employee1:" << endl;
    cout << obj.name << endl;
    cout << obj.age << endl;
    cout << obj.salary << endl;

    return 0;
}
