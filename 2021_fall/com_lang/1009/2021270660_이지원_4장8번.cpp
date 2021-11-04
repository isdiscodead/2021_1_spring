#include <iostream>
using namespace std;

class Circle {
    int radius;

public:
    void setRadius( int radius ) { this->radius = radius;};
    double getArea();
};

double Circle::getArea(){ return 3.14 * radius * radius; }


int main() {
    int size, r;
    int count = 0;
    
    // cout << "원의 개수 >> ";
    // cin >> size;

    // if( size <= 0 ) {
    //     cout << "개수는 양수로 입력해주세요.\n";
    //     return 0;
    // }

    while ( true ) {    // 정상까지 반복 입력 -> while(true), if ( 올바른 조건 ) break;
        cout << "원의 개수 >>";
        cin >> size;

        if( size > 0 ) break;
        cout << "양수를 입력하세요.\n";
    }


    Circle *cirArr = new Circle[size];
    if( !cirArr ) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    for( int i=0 ; i < size ; i++ ) {
        cout << "원 " << i+1 << "의 반지름 >> ";
        cin >> r;
        cirArr[i].setRadius(r);
    }

    for( int i=0 ; i < size ; i++ ) {
        if( cirArr[i].getArea() > 100 ) {
            count ++;
        }
    }

    cout << "면적이 100보다 큰 원은 " << count << "개 입니다.";

    delete[] cirArr;

    return 0;
}