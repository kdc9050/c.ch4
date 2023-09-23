/*
3. 클래스 Sum을 작성한다. Sum 클래스는 정수형 변수 n1과 n2를 가진다. init(x,y) 멤버 함수에서 두 개의 정수를 받아서 n1과 n2에 저장한다.
add()멤버 함수를 호출하면 (n1+n2)를 계산하여 반환한다. 클래스의 객체 obj를 생성하여서 다음과 같이 테스트 하라.
*/
#include <iostream>
using namespace std;

class Sum {
private:
    int n1, n2;

public:
    void init(int x, int y) {
        n1 = x;
        n2 = y;
    }

    int add() {
        return n1 + n2;
    }
};

int main() {
    Sum obj;
    int first, second;

    cout << "첫 번째 정수: ";
    cin >> first;
    cout << "두 번째 정수: ";
    cin >> second;
    obj.init(first, second);
    cout << "연산 결과: " << obj.add() << endl;

    return 0;
}
