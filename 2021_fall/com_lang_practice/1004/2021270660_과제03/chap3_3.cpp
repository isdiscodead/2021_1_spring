#include <iostream>
using namespace std;

int main() {
    int age; 

    cout << "본인 나이를 입력하세요(0~100)>>";
    cin >> age;

    if( age < 0 || age > 100 ) {
        cout << "잘못된 입력입니다.\n";
        return 0;
    }

    switch ( age / 10) {
    case 1:
        cout << "10대 입니다";
        break;

    case 2:
        cout << "20대 입니다";
        break;

    case 3:
        cout << "30대 입니다";
        break;

    case 4:
        cout << "40대 입니다";
        break;

    case 5:
        cout << "50대 입니다";
        break;

    case 6:
        cout << "60대 입니다";
        break;

    case 7:
        cout << "70대 입니다";
        break;

    case 8:
        cout << "80대 입니다";
        break;

    case 9:
        cout << "90대 입니다";
        break;

    case 10:
        cout << "100대 입니다";
        break;
        
    default: 
        cout << "어린이 입니다"; break;
    }

    return 0;
}