/*
10. 은행 계좌를 나타내는 BankAccount 클래스를 작성해보자
BankAccount 클래스는 계좌 번호(number), 잔액(balance)을 멤버 변수로 가진다.
입금 함수 deposit(), 출금 함수 withdraw()를 멤버 함수로 가진다. 객체를 생성하여서 다음과 같이 테스트하라.
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
        cout << "현재 잔액 : " << balance << endl;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "after deposit(" << amount << ") 현재 잔액 : " << balance << endl;
    }

    void withdraw(int amount) {
            balance -= amount;
            cout << "after withdraw(" << amount << ") 현재 잔액 : " << balance << endl;
        
    }
};

int main() {
    BankAccount bankaccount;

    bankaccount.init("123-123", 1000000);
    bankaccount.deposit(1000000);
    bankaccount.withdraw(1000000); 

}
