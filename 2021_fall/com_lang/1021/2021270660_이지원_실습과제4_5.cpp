#include <iostream>
using namespace std;

void print99( int dan=0 ) {
    if( dan==0 ) {
        for (dan=1 ; dan<=9 ; dan++ ) {  // 근데 이거 왜 <= 아니고 <지?? ... else 안 써서
            cout << dan << "단\n";
            for( int j=1; j<=9 ; j++ ) {
                cout << dan << " * " << j << " = " << dan*j << endl;;
            }
            cout << endl;
        }
    } else {
        cout << dan << "단\n";
        for ( int i=1 ; i<=9 ; i++ ) {
            cout << dan << " * " << i << " = " << dan*i << endl;
        }
        cout << endl;
    }

    
}

int main(void) {
    print99(3); // 3단 출력
    print99();  // 1 ~ 9단까지 전체 출력
    
    return 0;
}