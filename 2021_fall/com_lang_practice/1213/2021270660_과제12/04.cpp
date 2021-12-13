#include <iostream>
using namespace std;

int maximum(int x, int y, int z) {
    int a[] = {x, y, z};
    int max = a[0];

    for ( int i=1 ; i < 3 ; i++ ) {
        if ( max < a[i] ) {
            max = a[i];
        }
    }

    return max;   
}


int main(void) { 
    int a, b, c;
    cout << "3개의 정수를 입력하시오 >>";
    cin >> a >> b >> c;

    cout << "가장 큰 정수는 " << maximum(a,b,c) << endl;
    
    return 0;
}