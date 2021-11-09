#include <iostream>
using namespace std;

void gugudan(int dan);

int main(void) {
    int dan;
    while (true) {
        cout << "원하는 단을 입력하세요( 0 입력시 종료 ) >> ";
        cin >> dan;
        
        if(dan == 0) break;

        gugudan(dan);
    }
    
    return 0;
}

void gugudan( int dan ) {
    for( int i=1 ; i <= 9 ; i++ ) {
        cout << dan << " * " << i << " = " << dan * i << endl;
    }
    cout << endl;
}