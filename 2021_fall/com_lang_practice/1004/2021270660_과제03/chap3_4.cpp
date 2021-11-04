#include <iostream>
using namespace std;

int main() {
    cout << "구구단\n";

    for( int i=1 ; i<=9 ; i+=2 ) {
            cout << i << "단\n";
            for ( int j=1 ; j<=9 ; j++ ) {
                cout << i << " * " << j << " = " << i*j << endl;
            }
            cout << endl;
    }

    return 0;
}