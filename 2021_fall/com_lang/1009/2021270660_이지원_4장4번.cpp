#include <iostream>
using namespace std;


// Sample 클래스 
class Sample {
    int *p;
    int size; 

public: 
    Sample(int n) { 
        size = n; 
        if ( size <= 0 ) {  // size <= 0임에 유의하자! < 0 이 아니다 !! 
            cout << "동적할당 배열의 크기는 양수여야 합니다.";
            exit(1); // 어떻게 처리하는 게 좋을까? 
        }

        p = new int [size]; 

        // 동적 할당 성공 확인
        if( !p ) {
            cout << "메모리를 할당할 수 없습니다.";
            exit(-1); // 어떻게 처리하는 게 좋을까? 
        }
    }

    void read();    // 동적 할당받은 정수 배열 p에 사용자로부터 입력 
    void write();   // 정수 배열을 화면에 출력
    int big();  // 정수 배열에서 가장 큰 수 리턴
    ~Sample(){ delete[] p; }  // 소멸자 
};


void Sample::read(){
    cout << "정수 " << size << "개를 입력하세요." ;

    for(int i=0 ; i < size; i++ ) {
        cin >> p[i];
    }
}

void Sample::write(){
    for(int i=0 ; i < size; i++ ) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int Sample::big(){
    int max = p[0];
    for(int i=0 ; i < size; i++ ) {
        if ( max < p[i] ) {
            max = p[i];
        }
    }
    return max; 
}


int main() {
    Sample s(10);

    s.read();
    s.write();
    cout << "가장 큰 수는" << s.big() << endl;

    return 0;
}