/*
10. ���� ���¸� ��Ÿ���� BankAccount Ŭ������ �ۼ��غ���
BankAccount Ŭ������ ���� ��ȣ(number), �ܾ�(balance)�� ��� ������ ������.
�Ա� �Լ� deposit(), ��� �Լ� withdraw()�� ��� �Լ��� ������. ��ü�� �����Ͽ��� ������ ���� �׽�Ʈ�϶�.
*/
#include<iostream>
#include<string>
using namespace std;

class BankAccount {
    string number;
    int balance;

public:
    void init(string acc_number, int initial_balance) {
        number = acc_number;
        balance = initial_balance;
        cout << "���� �ܾ� : " << balance << endl;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "after deposit(" << amount << ") ���� �ܾ� : " << balance << endl;
    }

    void withdraw(int amount) {
            balance -= amount;
            cout << "after withdraw(" << amount << ") ���� �ܾ� : " << balance << endl;
        
    }
};

int main() {
    BankAccount bankaccount;

    bankaccount.init("123-123", 1000000);
    bankaccount.deposit(1000000);
    bankaccount.withdraw(1000000); 

}
