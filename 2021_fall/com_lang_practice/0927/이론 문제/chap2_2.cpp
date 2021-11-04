#include <iostream>

// std -> 표준 이름 공간 ( 모든 c++ 표준 라이브러리 들어있음 )
using namespace std;    // using name

int main() {

    // :: -> 범위 지정 연산자 
    std::cout << "Hello Jiwon 1\n";
    std::cout << "좋은 아침입니다.\n";
    std::cout << "Hello Sehyun" << std::endl << "Good Bye\n";
    
    cout << "Hello Jiwon 2\n";
    cout << "좋은 아침입니다.\n";
    cout << "Hello Sehyun" << std::endl << "Good Bye\n";
    
    return 0;   // c++ 표준 예외적으로 return문 생략 가능
}