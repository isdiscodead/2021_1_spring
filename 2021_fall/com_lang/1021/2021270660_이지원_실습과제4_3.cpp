#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char *title;
    int price;

public: 
    Book(const char *title, int price);
    ~Book() { delete [] title; }
    void set(char* title, int price);
    void show();
};

Book::Book( const char *title, int price ) {
    this->price = price;
    // 제목 길이 구하기
    int size = strlen(title);
    // 동적 할당 
    this->title = new char[size+1];
    if(!(this->title)) {
        cout << "동적 할당에 실패했습니다.";
        exit(1);
    }
    // 복사
    strcpy(this->title, title);
}

void Book::set( char *title, int price ) {
    this->price = price;

    // 제목 길이 구하기
    int size = strlen(title);

    // 길이 다르면 반납 후 동적 할당 
    if( size != strlen(this->title) ) {  
        // if문 안에서 delete하고 다시 생성해야 메모리 누수 X   
        delete [] this->title;
        this->title = new char[size+1];
        if(!(this->title)) {
            cout << "동적 할당에 실패했습니다.";
            exit(1);
        }
    }
    
    // 복사는 크기가 같아도 진행! ( if문 밖에서 하기 )
    strcpy(this->title, title);
}

void Book::show() {
    cout << title << ' ' << price << "원\n";
}

int main(void) {
    Book book("책1", 2000);
    book.show();
    book.set("책1개정판", 2200);
    book.show();

    return 0;
}

