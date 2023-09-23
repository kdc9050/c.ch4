/*
11. ���ڸ� ��Ÿ���� Box Ŭ������ �ۼ��� ����. Box Ŭ������ ������ ����(length), �ʺ�(width), ����(height) ���� ������ ������.
�� ������ ���Ǹ� ����Ͽ� ��ȯ�ϴ� getVolume()�Լ��� ������ �ִ�. ��ü�� �ϳ� �����Ͽ� ������ ���� �׽�Ʈ�϶�.
�� ��� ������ ���Ͽ� �����ڿ� �����ڸ� �ۼ��Ѵ�.
*/
#include<iostream>
using namespace std;

class Box {
    double length;
    double width;
    double height;

public:
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    double getVolume() const {
        return length * width * height;
    }
};

int main() {
    Box box;
    box.setLength(6.0);
    box.setWidth(7.0);
    box.setHeight(5.0);

    cout << "[" << box.getLength() << "," << box.getWidth() << "," << box.getHeight() << "]" << endl;
    cout << "������ ���� : " << box.getVolume() << endl;

    return 0;
}
