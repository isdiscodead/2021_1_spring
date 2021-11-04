#include <iostream>
using namespace std;


class Tower {
    // 비공개 먼저 기술
    int height; 

    public: 
        Tower();
        Tower(int height);

        int getHeight() { return height; }
};


// 클래스 생성자 함수 구현
Tower::Tower() : Tower(1) {}
Tower::Tower(int height) : height(height) { }


// 메인 함수
int main() {
    Tower myTower; // 1미터
    Tower seoulTower(100); // 100미터

    cout << "높이는" << myTower.getHeight() << "미터" << endl;
    cout << "높이는" << seoulTower.getHeight() << "미터" << endl;

    return 0;
}