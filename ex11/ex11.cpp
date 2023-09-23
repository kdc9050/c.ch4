/*
11. 상자를 나타내는 Box 클래스를 작성해 보자. Box 클래스는 상자의 길이(length), 너비(width), 높이(height) 등의 변수를 가진다.
또 상자의 부피를 계산하여 반환하는 getVolume()함수를 가지고 있다. 객체를 하나 생성하여 다음과 같이 테스트하라.
각 멤버 변수에 대하여 접근자와 설정자를 작성한다.
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
    cout << "상자의 부피 : " << box.getVolume() << endl;

    return 0;
}
