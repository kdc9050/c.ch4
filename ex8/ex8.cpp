/*
8. 복소수를 나타내는 Complex 클래스를 작성하라. 복소수는 실수부와 허수부로 이루어진다.
필요한 멤버 변수를 정의하라. 복소수를 5 + 3i와 같이 출력하는 print()멤버함수를 정의하라.
Complex 객체를 생성하여서 다음과 같이 테스트하라.
*/
#include <iostream>
using namespace std;

class Complex {
public:
    double r;
    double i;

    void setComplex(double real, double imag) {
        r = real;
        i = imag;
    }

    void print() {
        cout << r;
        if (i >= 0) {
            cout << " + " << i << "i" << endl;
        }
        else {
            cout << " - " << -i << "i" << endl;
        }
    }
};

int main() {
    Complex complex1;
    Complex complex2;

    complex1.setComplex(5, 3);
    complex2.setComplex(3, -4);

    complex1.print();
    complex2.print();

    return 0;
}
