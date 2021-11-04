/*
    작성자 : 이지원
    목  적 : C++ 프로그램의 기본 
    내  용 : 주석문, main()함수, return문 생략, 전처리기, cout, << 연산자, std::이름공간, \n, endl 조작자 
*/

#include <iostream>

int main() {

    std::cout << "Hello Everybody 1\n";
    std::cout << "C++ 기본 구조 및 구성요소 1\n";

    std::cout << "Hello Everybody 2" << std::endl << "C++ 기본 구조 및 구성요소 2\n";

    return 0;   // c++ 표준 예외적으로 return문 생략 가능
}