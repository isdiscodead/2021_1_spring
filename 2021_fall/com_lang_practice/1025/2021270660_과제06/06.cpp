#include <iostream>
using namespace std;

int main(void) {
    int size;
    string *p;

    cout << "문자열의 개수? >>";
    cin >> size;
    if ( size <= 0 ) {
        cout << "개수는 양의 정수여야 합니다.\n";
        return 0;
    }

    // 버퍼에 있는 enter 비우기
    cin.ignore();

    p = new string[size];
    if(!p) {
        cout << "동적 할당에 실패했습니다.";
        return 0;
    }

    for(int i=0 ; i < size ; i++ ) {

        cout << "문자열 " << i+1 << " >>";
        getline(cin, p[i], '\n');
    }

    string first = p[0];
    for( int i=1 ; i < size; i++ ) {
        if(first > p[i]) {
            first = p[i];
        }
    }
    cout << "사전에서 가장 앞에 나오는 문자열은 " << first << " 입니다.\n";

    delete [] p;
    return 0;
}