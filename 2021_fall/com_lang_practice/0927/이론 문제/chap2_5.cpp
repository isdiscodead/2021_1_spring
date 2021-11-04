#include <iostream>
#include <cstring>

using namespace std;    

/*
    cin.getline() : 공백이 포함된 문자열 입력
*/

int main() {

    cout << "본인 성명을 입력하세요 >>";
    char name[11]; 
    cin >> name;
    cout << "제 이름은 " << name << "입니다.\n"; 

    cout << "주소를 입력하세요 >>";
    char address[100];
    cin.getline(address, 100, 'c');
    cout << "주소는 " << address << "입니다.\n";
}