/*
5. �ֻ����� ��Ÿ���� Ŭ������ Dice�� �ۼ��Ͽ� ����. Dice Ŭ������ �ʿ��� ��� ������ ��� �Լ��� �����Ͽ� ����.
��� �Լ����� �ֻ����� ������ ����Լ���roll()�� �����϶�. roll() ��� �Լ��� �ۼ��� �� ������ ������ ���� ������ �� �ִ�.
face = (int) (rand()%6 +1) Dice ��ü�� �����Ͽ��� �׽�Ʈ �϶�.
*/
#include <iostream>
#include <time.h>
using namespace std;

class Dice {
public:
    int face;

    void roll() {
        face = (rand() % 6) + 1;
    }
};

int main() {
    srand(time(NULL));

    Dice dice;

    dice.roll();
    cout << "�ֻ��� �� = " << dice.face << endl;

    dice.roll();
    cout << "�ֻ��� �� = " << dice.face << endl;

    return 0;
}
