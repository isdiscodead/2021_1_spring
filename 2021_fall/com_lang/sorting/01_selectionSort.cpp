 #include <iostream>
 using namespace std;
 
// 선택 정렬 : 가장 작은 값을 찾아 맨 앞부터 하나씩 정렬
// 오름차순
template <class T>
void templateSelectionSort(T arr[], int size) {
    for ( int i=0 ; i < size ; i++ ) {
        int loc = i;
        for ( int j=i+1 ; j < size ; j++ ) {
            if ( arr[loc] >= arr[j] ) {
                loc = j;
            }
        }
        swap(arr[i], arr[loc]);
    }
}

// 내림차순
template <class T>
void templateSelectionSort2(T arr[], int size) {
    for ( int i=0 ; i < size ; i++ ) {
        int loc = i;
        for ( int j=i+1 ; j < size ; j++ ) {
            if ( arr[loc] <= arr[j] ) {
                loc = j;
            }
        }
        swap(arr[i], arr[loc]);
    }
}

 int main(void) {
     int arrSize = 5;
     int arrInt[5] = {1, 3, 6, 2, -10};
     double arrDub[5] = {4.2, 3.40, -0.4, -6.5, 2.03};

    templateSelectionSort(arrInt, arrSize);
    templateSelectionSort2(arrDub, arrSize);

    for( int i = 0; i < arrSize ; i++ ) {
        cout << arrInt[i] << " ";
    }
    cout << endl;
    for( int i = 0; i < arrSize ; i++ ) {
        cout << arrDub[i] << " ";
    }
 }