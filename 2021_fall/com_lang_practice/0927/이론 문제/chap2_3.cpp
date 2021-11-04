#include <iostream>

using namespace std;    

int main() {
    cout << "너비를 입력하세요 >> ";
    int width;
    cin >> width;   // 표준 입력 스트림 객체 cin

    cout << "높이를 입력하세요 >> ";
    int height;
    cin >> height;

    int area = width * height;
    cout << "면적은 " << area << "입니다\n";

    cout << "숫자 5개를 입력하세요. ( 구분은 엔터 ) >>";
    int num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;    // 왼쪽부터 오른쪽으로 순서대로 저장
    cout << "입력하신 숫자 5개는 순서대로 " << num1 << num2 << num3 << num4 << num5 << "입니다\n";
}