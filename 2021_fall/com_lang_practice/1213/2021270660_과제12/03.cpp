#include <iostream>
using namespace std;

#define SIZE 9

int main(void) {   
    for ( int i=1 ; i <= SIZE ; i++ ) {
        for ( int j=1 ; j <= i ; j++ ) {
            cout << j;
        }
        for ( int j=SIZE-i ; j > 0 ; j-- ) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}