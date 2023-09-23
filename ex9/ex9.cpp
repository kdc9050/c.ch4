/*
9. �ﰢ���� ��Ÿ���� Triangle Ŭ������ �����Ͽ� ����. Triangle Ŭ������ �غ��� ����, ������ ��Ÿ���� ��� ������ ������.
�ﰢ���� ������ ���ϴ� ��� �Լ� area()�� �߰��϶�. Triangle ��ü�� �����Ͽ��� ������ ���� �׽�Ʈ�϶�.
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
    cout << "�غ��� " << triangle.b << "�̰� ���̰� " << triangle.h << "�� �ﰢ���� ����: " << result << endl;

    return 0;
}
