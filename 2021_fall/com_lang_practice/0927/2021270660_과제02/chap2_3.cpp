#include <iostream>
using namespace std;    


int max_num( int num[], int size ) {
    int max = num[0];

    for ( int i = 0 ; i < size ; i++ ) {        
        if ( num[i] > max ) {
            max = num[i];
        }
    }

    return max;
}


int main() {
    int num[5];

    cout << "5개의 정수를 입력하세요 >> ";
    
    for ( int i = 0 ; i < 5 ; i++ ) {
        cin >> num[i];
    }
    
    for ( int i = 0 ; i < 5 ; i++ ) {
        cout << num[i] << ' ';
    }
    
     cout << "중에 제일 큰 수는" << max_num( num, 5 ) << "입니다.\n";
}

