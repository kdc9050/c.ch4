/*
4. å�� ��Ÿ���� Book Ŭ������ �����Ͽ� ����. Book Ŭ������ ����(title)�� ����(autor)�� ��Ÿ���� ��� ������ ������.
�� ��� ������ ���� �����Ͽ��� ���� "Great C++"�� �����ϰ� ���ڿ�"Bob"�� �����Ͽ� ����.
*/
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
};

int main() {
    Book obj;

    obj.title = "Great C++";
    obj.author = "Bob";

    cout << "å �̸�: " << obj.title << endl;
    cout << "å ����: " << obj.author << endl;

    return 0;
}
