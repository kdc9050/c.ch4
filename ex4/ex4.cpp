/*
4. 책은 나타내는 Book 클래스를 정의하여 보자. Book 클래스는 제목(title)과 저자(autor)를 나타내는 멤버 변수를 가진다.
각 멤버 변수를 직접 접근하여서 제목에 "Great C++"를 대입하고 저자에"Bob"을 대입하여 보자.
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

    cout << "책 이름: " << obj.title << endl;
    cout << "책 저자: " << obj.author << endl;

    return 0;
}
