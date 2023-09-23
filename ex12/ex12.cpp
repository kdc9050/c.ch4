/*
12. �ð��� ��Ÿ���� Time Ŭ������ �ۼ��غ���. Time Ŭ������ ��(time), ��(minute), ��(second)�� ��� ������ ������.
�� �ð��� �����ϴ� setTime() �Լ��� ���� �ð��� ����ϴ� print() �Լ��� ������ �ִ�.
��ü�� �ϳ� �����Ͽ� ������ ���� �׽�Ʈ �϶�.
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
