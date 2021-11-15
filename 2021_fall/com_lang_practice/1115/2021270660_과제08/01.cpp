#include <iostream>
using namespace std;

int cal( int a, int b ) {
    return a+b;
}

int cal( int a, int b, int c ) {
    return a*b*c;
}

int cal( int a, int b, int c, int d ) {
    int max = a;
    int arr[] = {a, b, c, d};
    for ( int i=0 ; i < 4 ; i++ ) {
        if ( max < arr[i] ) {
            max = arr[i];
        }
    }
    return max;
}



int main(void) {

    cout << cal(10, 20) << endl;
    cout << cal(10, 20, 30) << endl;
    cout << cal(10, 20, 30, 40) << endl;

    return 0;
}