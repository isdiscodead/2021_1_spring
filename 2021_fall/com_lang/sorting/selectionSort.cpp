 // 선택 정렬 : 가장 작은 값을 찾아 맨 앞부터 하나씩 정렬
 // 오름차순
 void selectionSort(int arr[], int size) {
     for(int i=0 ; i < size-1 ; i++ ) { // 맨 뒤는 자동적으로 가장 큰 값이므로 포함 X
         int loc = i;
         for(int j=i+1 ; j < size ; j++ ) {
             if ( arr[loc] >= arr[j] ) {
                 loc = j;
             }
         }
        swap(arr[i], arr[loc])
     }
 }

 // 내림차순
 void selectionSort(int arr[], int size) {
     for(int i=size ; i > 0 ; i-- ) { // 맨 뒤는 자동적으로 가장 큰 값이므로 포함 X
         int loc = i;
         for(int j=0 ; j < size ; j++ ) {
             if ( arr[loc] <= arr[j] ) {
                 loc = j;
             }
         }
        swap(arr[i], arr[loc])
     }
 }