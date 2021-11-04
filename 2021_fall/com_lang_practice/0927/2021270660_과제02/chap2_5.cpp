#include <iostream>

using namespace std; 


int main() {   
    string str1, str2;

    cout << "새 암호를 입력하세요 >> ";
    cin.getline(cin, str1)
    cout << "새 암호를 다시 한번 입력하세요 >> ";
    cin.getline(cin, str2)

    if ( str1 == str2 ) {
        cout << "같습니다.";
    } else {
        cout << "다릅니다.";
    }
}