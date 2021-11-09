#include <iostream>
#include <cstring>
using namespace std;

char s;

char& find( char* str, char find, bool& result ) {
    for (int i=0; str[i] ; i++ ) {
        if( str[i] == find ) {
            result = true;
            return str[i];
        }
    }
    result = false;
    
    s = 'n';
    return s;
    // 이 코드 있으면 왜 뜨는 거?????????????????
}

int main(void) {
    char s[] = "Mike";
    bool b;
    char &loc1 = find(s, 'k', b);

    if( !b ) {
        cout << "k를 발견할 수 없다\n";
        return 0;
    }

    loc1 = 'm'; // 'k' 위치에 'm' 기록
    cout << s << endl; // "mime"가 출력됨

    char &loc2 = find(s, 'k', b);   // loc2는 참조 영역의 메모리만 가짐??
    
    if( !b ) {
        cout << "k를 발견할 수 없다\n";
        return 0;
    }

    loc2 = 'm'; // 'k' 위치에 'm' 기록
    cout << s << endl;

    return 0;
}