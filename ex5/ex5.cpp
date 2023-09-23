/*
5. 주사위를 나타내는 클래스인 Dice를 작성하여 보자. Dice 클래스에 필요한 멤버 변수와 멤버 함수를 생각하여 보자.
멤버 함수에는 주사위를 굴리는 멤버함수인roll()을 포함하라. roll() 멤버 함수를 작성할 때 난수는 다음과 같이 생성할 수 있다.
face = (int) (rand()%6 +1) Dice 객체를 생성하여서 테스트 하라.
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
    cout << "주사위 값 = " << dice.face << endl;

    dice.roll();
    cout << "주사위 값 = " << dice.face << endl;

    return 0;
}
