#include <iostream>
using namespace std;

class Book {
    string title;
    string author;

public:
    Book() {
        this->author = "Not Unknown";
        this->title = "No title";
    };
    Book(string t, string a) { 
        this->author = a;
        this->title = t;
    }

    void setAuthor(string author) { this->author = author; }
    string getAuthor() { return author; }

    void setTitle(string title) { this->title = title; }
    string getTitle() { return title; }

    void printInfo() {
        cout << "책 이름: " << title << endl;
        cout << "책 저자: " << author << endl;
    }
};


int main(void) {
    Book a;
    Book b("위대한 개츠비", "F. 스콧 피츠제럴드");
    Book c("어린왕자", "앙투안 드 생텍쥐페리");
    Book d("두 도시 이야기", "찰스 디킨스");

    a.printInfo();
    b.printInfo();
    c.printInfo();
    d.printInfo();

    return 0;
}