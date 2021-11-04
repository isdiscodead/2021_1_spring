#include <iostream>
using namespace std;

void makeSumV(int sum, int plus) {
    sum += plus;
    cout << "더한 결과는 " << sum << "입니다.\n";
}

void makeSumP(int *sum, int plus) {
    *sum += plus;
    cout << "더한 결과는 " << *sum << "입니다.\n";
}

int main(void) {
    int sum = 5;
    int plus = 7;

    makeSumV(sum, plus);
    cout << sum << endl;
    makeSumP(&sum, plus);
    cout << sum << endl;

    return 0;
}