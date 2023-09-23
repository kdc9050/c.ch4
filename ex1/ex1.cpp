/*
1. ����� ��Ÿ���� Ŭ���� Person�� �ۼ��Ѵ�. Person�� �̸�(name), ����(age)�� ��Ÿ���� ������ ������ �ִ�.
Person�� ������ �����ϴ� �Լ� setPerson(name,age)�� ������ ����ϴ� �Լ� print()�� ������ �ִ�.
Person�� ��ü obj�� �����ϰ� ���⿡ "��ö��",21�� �����غ���
TIP �̸��� ���ڿ���, ���̴� ������ ������ ��Ÿ����.
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
        cout <<"�̸�: " << name << endl;
        cout <<"����: " << age  << endl;
    }
};

int main() {
    Person obj;

    obj.setPerson("��ö��", 21);

    obj.print();

    return 0;
}

