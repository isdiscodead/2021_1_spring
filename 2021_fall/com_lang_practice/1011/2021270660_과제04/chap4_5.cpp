#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a = 5;
    int b = 7;

    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b;

    return 0;
}