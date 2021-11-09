#include <iostream>
using namespace std;

void charPrint(char ch, int n);

int main(void) {
    char ch;
    int num;

    cout << "횟수를 0으로 입력하시면 종료됩니다.\n";

    while ( true ) {
        cout << "문자 >> ";
        cin >> ch;

        cout << "횟수 >> ";
        cin >> num;

        if( num == 0 ) break;

        charPrint(ch, num);
    }

    

    return 0;
}

void charPrint(char ch, int n) {
    for(int i=0; i < n ; i++) {
        cout << ch;
    }
    cout << endl;
}