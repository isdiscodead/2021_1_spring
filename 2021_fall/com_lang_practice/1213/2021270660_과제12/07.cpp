#include <iostream>
using namespace std;

#define SIZE 3

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
        cout << title << " (저자 : " << author << " ) " << endl;
    }
};


int main(void) {
    Book arr[SIZE];
    arr[0].setTitle("위대한 개츠비");
    arr[0].setAuthor("F. 스콧 피츠제럴드");
    arr[1].setTitle("어린왕자");
    arr[1].setAuthor("앙투안 드 생텍쥐페리");
    arr[2].setTitle("두 도시 이야기");
    arr[2].setAuthor("찰스 디킨스");
    
    cout << "<< 소장 도서 목록 >>\n";
    for ( int i=0 ; i < SIZE ; i++ ) {
        cout << i+1 << " ";
        arr[i].printInfo(); 
    }

    return 0;
}