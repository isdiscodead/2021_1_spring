#include <iostream>
using namespace std;

int main() {
    int i=2, j=1;
    cout << "구구단\n";
    
    while( i <= 9 ) {
        cout << i << "x" << j << "=" << i*j << '\n';
        j++; 

        if ( j > 9 ) {
            j = 1; 
            i += 2;
        }
    }

    return 0;
}