#include <iostream>
using namespace std;

class MyVector {
    int *mem;
    int size;

public:
    MyVector(int n=100, int val=0);
    ~MyVector() { delete [] mem; }
    void display();
};

MyVector::MyVector( int n, int val ) {
    size = n;
    // 배열 크기 확인
    if ( size <= 0 ) {
        cout << "배열의 크기는 자연수여야 합니다. \n";
        exit(1);
    }

    mem = new int [n];
    // 동적 할당 확인 
    if(!mem) {
        cout << "동적 할당에 실패했습니다.";
        exit(1);
    }
     
    for ( int i=0 ; i<size ; i++ ) mem[i] = val;
}

void MyVector::display() {
    for ( int i=0 ; i<size ; i++ ) cout << mem[i] << " ";
    cout << endl;
}


int main(void) {
    MyVector vec1;
    // 이거 배울 땐 vec1();으로 배운 것 같은데 안 되는 이유?
    vec1.display();
    MyVector vec2(10, 100);
    vec2.display();
    MyVector vec3(10);
    vec3.display();

    return 0;
}