#include <iostream>
using namespace std;

template <class T>
/*
void reverseArray(T arr[], int size) {
    T* temp = new T[size];
    for ( int i=0 ; i < size ; i++ ) {
        temp[i] = arr[i];
    }
    for ( int i = 0 ; i < size ; i++ ) {
        arr[i] = temp[size - i-1];  // size-1 인덱스부터 복사
    } 
    // 이거 할거면 delete 해야함 !!
    delete [] temp;
}
*/
void reverseArray(T1 arr[], int size) {
    int tempSize = size / 2;
    T1 temp;
    // 맨앞 <-> 맨뒤로 순서대로 바꿔준다 !! 효율적인 계산 ...
    for ( int i=0 ; i < tempSize; i++ ) {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

template <class T>
void display(T arr[], int size ) {
    for ( int i = 0 ; i < size ; i++ ) {
        cout << arr[i] << " ";
    } 
    cout << endl;
}


int main ( void ) {
    int x[] = { 1, 10, 100, 1000 };
    reverseArray(x, 4);
    cout << "x = ";
    display(x, 4);

    double y[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
    reverseArray(y, 6);
    cout << "y = ";
    display(y, 6);

    char str[20] = "C++ is powerful";

    // 문자열 str을 뒤집기 위한 reverseArray() 함수 호출문
    reverseArray(str, strlen(str)); // strlen(str)+1 하면 null부터 복사됨
    cout << "str = " << str << endl;
} 