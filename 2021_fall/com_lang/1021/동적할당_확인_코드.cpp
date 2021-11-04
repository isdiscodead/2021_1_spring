#include <iostream>
using namespace std;

int main(void) {
    double *q;

    for( int i=0 ; i < 10 ; i++ ) {

        // 여기 주목 !! 
        try {
            q = new double[100*1024*1024];
        } catch( bad_alloc ) {
            cout << "동적 할당 실패";
            return 0;
        }
        // 시험에도 이걸로 !! 

        for ( int i=0 ; i < 100000 ; i++ ) {
            q[i] = i;
        }
        
        delete [] q;
    }
}