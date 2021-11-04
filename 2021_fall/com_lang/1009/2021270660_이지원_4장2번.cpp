#include <iostream>
using namespace std;

int main() {
    int size = 5;
    double avg;
    int sum = 0; 
    int *arrP = new int[size];

    // 동적할당 성공 여부 확인
    if( !arrP ) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    cout << "정수 5개 입력>> ";

    // 입력 for문
    for(int i=0; i < size ; i++ ) {
        cin >> arrP[i];
    }

    // 연산 for문 
    for(int i=0; i < size ; i++ ) {
        sum += arrP[i];
    }

    avg = sum / (double)size;

    cout << "평균 " << avg;

    delete [] arrP;

    return 0;
}