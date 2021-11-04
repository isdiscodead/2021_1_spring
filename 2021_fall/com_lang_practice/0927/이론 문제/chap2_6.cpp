#include <iostream>
#include <string>   // 참고로 iostream에 string이 내장되어 있음

using namespace std;    

/*
    string 클래스 : 문자열을 객체로 ! -> #include <string>
    문자열 복사, 비교, 수정 등 문자열 연산을 위한 멤버 함수와 연산자 존재
*/

int main() {

    string subject("컴퓨터언어실습2");
    string name("이대국");
    string person;

    cout << subject + "를 강의하는 사람은?";
    cout << "(힌트 : 첫 글자는 " << "'" << name[0] << name[1] << "'" << ")?";

    getline(cin, person);

    if ( person == name)
        cout << person << "맞습니다." << endl;
    else 
        cout << person << "아닙니다." + name + "입니다." << endl;
}