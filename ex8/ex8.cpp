/*
8. ���Ҽ��� ��Ÿ���� Complex Ŭ������ �ۼ��϶�. ���Ҽ��� �Ǽ��ο� ����η� �̷������.
�ʿ��� ��� ������ �����϶�. ���Ҽ��� 5 + 3i�� ���� ����ϴ� print()����Լ��� �����϶�.
Complex ��ü�� �����Ͽ��� ������ ���� �׽�Ʈ�϶�.
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
