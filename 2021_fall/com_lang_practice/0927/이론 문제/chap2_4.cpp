#include <iostream>
#include <cstring>

using namespace std;    

/*
    C++ 문자열 표현 방법
    1. C-String -> null 문자 포함 ( c 방식 ) 
        -> <cstring> 헤더 파일 include
    2. string class ( 객체 )
*/

int main() {
    char name1[6] = { 'J', 'i', 'w', 'o', 'n', '\0' };
    char name2[5] = { 'J', 'i', 'w', 'o', 'n' };
    char name3[6] = "Jiwon";
    char name4[] = "Jiwon";

    cout << "name1은 " << name1 << endl;
    cout << "name2은 " << name2 << endl;
    cout << "name3은 " << name3 << endl;
    cout << "name4은 " << name4 << endl;

    cout << "본인 성명을 입력하세요 ( 빈칸 없이 ) >>";

    char name[11]; 
    cin >> name;

    cout << "제 이름은 " << name << "입니다.\n"; 
}