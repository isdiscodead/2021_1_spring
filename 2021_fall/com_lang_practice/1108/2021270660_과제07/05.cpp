#include <iostream>
using namespace std;

int double_value( int n );
void double_pointer( int *n );
void double_ref( int &n );

int main(void) {
    int n;
    cout << "숫자를 입력하세요 >> ";
    cin >> n;

    n = double_value(n);
    cout << "값에 의한 호출 n = " << n << endl;

    double_pointer(&n);
    cout << "주소에 의한 호출 n = " << n << endl;

    double_ref(n);
    cout << "참조에 의한 호출 n = " << n << endl;

    return 0;
}


int double_value( int n ) {
    n *= 2;
    return n;
}

void double_pointer( int *n ) {
    *n *= 2;
}

void double_ref( int &n ) {
    n *= 2;
}
