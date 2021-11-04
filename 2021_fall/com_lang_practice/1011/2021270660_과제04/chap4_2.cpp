#include <iostream>
using namespace std;

int getFactorial(int n) {
    if(n==0) {
        return 1;
    }
    return n * getFactorial(n-1);
}

int main(void) {
    int num = -1;

    while( num < 0 ) {    
        cout << "양의 정수를 입력하세요>>";
        cin >> num;
    }

    cout << getFactorial(num) << endl;

    return 0;
}

