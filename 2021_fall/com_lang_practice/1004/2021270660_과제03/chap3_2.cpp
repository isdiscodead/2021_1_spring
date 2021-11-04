#include <iostream>
using namespace std;

int main() {
    double height, weight, bmi;

    cout << "신장(m, 미터)을 입력하세요>>";
    cin >> height;

    cout << "체중(kg, 킬로그램)을 입력하세요>>";
    cin >> weight;

    bmi = weight / (height*height);
    if ( bmi < 0 ) {
        cout << "잘못된 입력입니다. 입력하신 값을 확인해주세요.\n";
        return 0;
    }
    cout << "당신의 체질량지수(BMI)는 " << bmi <<" 입니다.\n";

    if ( bmi < 18.5 ) {
        cout << "0 이상 18.5 미만이면 저체중입니다.\n";
    } else if ( bmi < 23 ) {
        cout << "18.5 이상 23 미만이면 정상입니다.\n";
    } else if ( bmi < 25 ) {
        cout << "23 이상 25 미만이면 과체중입니다.\n";
    } else if ( bmi < 30 ) {
        cout << "25 이상 30 미만이면 비만입니다.\n";
    } else {
        cout << "30 이상이면 고도비만입니다.\n";
    }

    return 0;
}