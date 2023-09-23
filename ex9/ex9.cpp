/*
9. 삼각형을 나타내는 Triangle 클래스를 정의하여 보자. Triangle 클래스는 밑변과 높이, 면적을 나타내는 멤버 변수를 가진다.
삼각형의 면적을 구하는 멤버 함수 area()를 추가하라. Triangle 객체를 생성하여서 다음과 같이 테스트하라.
*/
#include <iostream>
using namespace std;

class Triangle {
public:
    int b;
    int h;

    void setTriangle(int base, int height) {
        b = base;
        h = height;
    }

    double area() {
        return b * h * 0.5;
    }
};

int main() {
    Triangle triangle;

    triangle.setTriangle(3, 4);

    double result = triangle.area();
    cout << "밑변이 " << triangle.b << "이고 높이가 " << triangle.h << "인 삼각형의 면적: " << result << endl;

    return 0;
}
