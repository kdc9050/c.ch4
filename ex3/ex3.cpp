/*
3. Ŭ���� Sum�� �ۼ��Ѵ�. Sum Ŭ������ ������ ���� n1�� n2�� ������. init(x,y) ��� �Լ����� �� ���� ������ �޾Ƽ� n1�� n2�� �����Ѵ�.
add()��� �Լ��� ȣ���ϸ� (n1+n2)�� ����Ͽ� ��ȯ�Ѵ�. Ŭ������ ��ü obj�� �����Ͽ��� ������ ���� �׽�Ʈ �϶�.
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

    cout << "ù ��° ����: ";
    cin >> first;
    cout << "�� ��° ����: ";
    cin >> second;
    obj.init(first, second);
    cout << "���� ���: " << obj.add() << endl;

    return 0;
}
