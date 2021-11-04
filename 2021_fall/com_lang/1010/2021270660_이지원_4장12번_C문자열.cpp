#include <iostream>
using namespace std;

#define PI 3.14
#define STR_MAX 20


class Circle {
    int radius;
    char name[STR_MAX];  // 문자열 버전

public: 
    void setCircle( char* name, int radius ) { 
        this->radius = radius; 
        strcpy(this->name, name);
    }
    double getArea() { return radius * radius * PI; }
    char* getName() { return name; }
};


class CircleManager {
    Circle *p;
    int size;
public:
    CircleManager(int size);
    ~CircleManager() { delete[] p; }

    void searchByName();
    void searchByArea();
};

CircleManager::CircleManager(int size) {

    if( size < 1 ) {    // size <= 0 또는 size < 1로 쓰자 !! 0도 포함이다 !!
        cout << "크기는 양수로 입력해야 합니다. \n";
        exit(1);
    }

    this->size = size;

    p = new Circle[size]; 
    if (!p) {
        cout << "메모리를 할당할 수 없습니다.";
        exit(1);
    }

    for( int i=0 ; i<size ; i++ ) {
        char name[STR_MAX]; 
        int r;
        cout << "원 " << i+1 << "의 이름과 반지름 >> ";
        cin >> name >> r;
        p[i].setCircle(name, r);
    }
}


void CircleManager::searchByName() {
    char query[STR_MAX];
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> query;

    // 검색 및 출력
    for(int i=0; i < size ; i++) {    //  sizeof()는 그냥 잊어버리자 ...
        if (!strcmp(query, p[i].getName())) {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
        }
    }
}

void CircleManager::searchByArea() {
    int area;
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> area;
    cout << area << "보다 큰 원을 검색합니다.\n";

    for(int i=0; i < size ; i++) {
        if ( p[i].getArea() >= area ) {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", " ;
        }
    }

    cout << '\n';
}

int main() {
    int size;

    cout << "원의 개수 >> ";
    cin >> size;

    CircleManager cirMan(size);

    cirMan.searchByName();
    cirMan.searchByArea();

    return 0;
}