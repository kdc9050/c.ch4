/*
7. �ڵ����� ��Ÿ���� CellPhone Ŭ������ �ۼ��Ͽ� ����. �ڵ����� ���´� ��ȭ��ȣ(number), �𵨸�(model), ����(color)�� ��Ÿ����.
�̰͵��� ��� ������ �����Ѵ�. ������ ���� �Ѵ� ��� �Լ� setOn()�� �߰��Ͽ� ����. CellPhone ��ü�� �����Ͽ��� ������ ���� �׽�Ʈ�϶�.
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
