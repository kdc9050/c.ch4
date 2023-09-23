/*
2. ��ǻ�͸� ��Ÿ���� Ŭ���� Computer�� �ۼ��Ѵ�. Computer�� �̸�(name), �޸𸮿뷮(RAM), CPU�ӵ�(cpu_speed)�� ��Ÿ���� ������ ������ �ִ�.
Computer�� ������ �����ϴ� �Լ� setComputer(name, RAM,cpu_speed)�� ������ ����ϴ� �Լ� print()�� ������ �ִ�.
Computer�� ��üobj�� �����ϰ� ���⿡ {"���ǽ���ǻ��",8,4.2}�� �����غ���.
TIP �̸��� ���ڿ���, �޸� �뷮�� ������, CPU�ӵ��� �Ǽ��� ������ ��Ÿ����.
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
        cout << "�̸�: " << name << endl;
        cout << "RAM: " << RAM << endl;
        cout << "CPU �ӵ�: " << cpu_speed << endl;
    }
};

int main() {
    Computer obj;

    obj.setComputer("���ǽ� ��ǻ��", 8, 4.2);
    obj.print();

    return 0;
}
