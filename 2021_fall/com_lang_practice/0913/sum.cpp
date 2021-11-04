#include <iostream>

int main() {
    int sum = 0;
    
    for( int i = 1 ; i <= 100 ; i++ ) {
        sum += i;
    }

    std::cout << "1에서 100까지 더한 결과는" << sum << "입니다.\n";
    return 0;
}