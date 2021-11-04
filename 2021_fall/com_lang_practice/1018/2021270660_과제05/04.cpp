#include <iostream>
using namespace std;

class Person {
    double height;
    int weight;

public: 
    Person();
    Person(double h, int w);
    double getBMI();
};


Person::Person() : height(1.8), weight(69) {
    cout << "키 : " << height << "m\n";
    cout << "체중 : " << weight << "kg\n";
}

Person::Person(double h, int w) : height(h), weight(w) {
    cout << "키 : " << height << "m\n";
    cout << "체중 : " << weight << "kg\n";
}

double Person::getBMI() { return weight / height / height; }


int main(void) {
    Person normal;
    double BMI = normal.getBMI();
    cout << "BMI = " << BMI << endl;

    Person check(1.6, 68);
    BMI = check.getBMI();
    cout << "BMI = " << BMI << endl;

    return 0;
}