#include <iostream>
using namespace std;

void print( char ch=' ', int line=1, int cnt=20) {
    for ( int i=0; i < line ; i++ ) {
        for ( int j=0 ; j<cnt ; j++ ) {
            cout << ch;
        }
        cout << endl;
    }
}


int main(void) {
    print();
    print('?');
    print('#', 10);

    return 0;
}