#include <iostream>
using namespace std;


class CoffeeMachine {
    int coffee;
    int water;
    int sugar;

    public:
        // 생성자 함수
        CoffeeMachine(int cof, int wat, int sug){ coffee = cof, water = wat, sugar = sug; }
        
        // 클래스 선언부에 있으면 inline 함수화
        void show() {
             cout << "커피머신 상태 : " << "커피 = " << coffee << " 물 = " << water << " 설탕 = " << sugar << endl;
        };

        void fill();

        void lackOfMaterial(string coffType);

        void drinkEspresso();
        void drinkSugarCoffee();
        void drinkAmericano();
};


// 커피 머신 채우기
void CoffeeMachine::fill(){
    coffee = 10;
    water = 10;
    sugar = 10;
}

// 재료 부족 안내 메세지 출력 inline 함수
inline void CoffeeMachine::lackOfMaterial(string coffType) {
    // << 도 하나의 연산자이므로 최대한 덜 사용하도록 하자 ! 
    cout << "\n재료가 부족하여 " << coffType << "를 만들 수 없습니다.\n";
    show();
}

// 커피 만드는 함수
void CoffeeMachine::drinkEspresso(){
    if( coffee < 1 || water < 1 ) {
        lackOfMaterial("에스프레소");
        return;
    }
    coffee -= 1;
    water -= 1;
}

void CoffeeMachine::drinkAmericano(){
    if( coffee < 1 || water < 2 ) {
        lackOfMaterial("아메리카노");
        return;
    }
    coffee -= 1;
    water -= 2;
}

void CoffeeMachine::drinkSugarCoffee(){
    if( coffee < 1 || water < 2 || sugar < 1 ) {
        lackOfMaterial("설탕커피");
        return;
    }
    coffee -= 1;
    water -= 2;
    sugar -= 1;
}


// 메인 함수
int main() {
    CoffeeMachine java(5, 8, 2);

    java.drinkAmericano();
    java.show();

    java.drinkSugarCoffee();
    java.show();

    java.drinkEspresso();
    java.show();

    java.drinkSugarCoffee();
    java.show();

    java.drinkSugarCoffee();

    java.drinkAmericano();

    java.fill();
    java.show();

    return 0;
}