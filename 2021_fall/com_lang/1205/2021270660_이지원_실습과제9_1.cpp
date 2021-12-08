#include <iostream>
using namespace std;


// Base Class
class Convert {
protected:
    double before, after;

public:
    Convert(double before) { this->before = before; } 
    virtual ~Convert() {} ;
    virtual void compute() = 0;
    virtual void display() = 0;
};


// 자식 클래스 구현
class LtoG : public Convert {   
public:
    LtoG(double liter) : Convert(liter) {};
    virtual ~LtoG() {} ;
    virtual void compute() { after = before / 3.7854; }
    virtual void display() {
        cout << before << " 리터 = " << after << " 갤런\n";
    }
};

class CtoF : public Convert {   
public:
    CtoF(double c) : Convert(c) {};
    virtual ~CtoF() {} ;
    virtual void compute() { after = before*9/5 + 32; }
    virtual void display() {
        cout << before << " 섭씨 = " << after << " 화씨\n";
    }
};

class MtoKm : public Convert {   
public:
    MtoKm(double mile) : Convert(mile) {};
    virtual ~MtoKm() {} ;
    virtual void compute() { after = before * 1.609344; }
    virtual void display() {
        cout << before << " 마일 = " << after << " 킬로미터\n";
    }
};


int main(void) {
    Convert *p[3] = {new MtoKm(23.2), new LtoG(10.3), new CtoF(24.5)};

    /*
    Convert *p[3];

    try {
        p[0] = new MtoKm(23.2);
        p[1] = new LtoG(10.3);
        p[2] = new CtoF(24.5);
    } catch ( bad_alloc ) {
        cout << "동적 할당 실패\n";
        return 0;
    }
    */

    // 포인터 배열이므로 각각 접근하되 p[i] -> compute()
    // delete p[i]로 되는 것! 
    for (int i = 0; i < 3; i++) {
        p[i]->compute();
        p[i]->display();
    }

    for (int i = 0; i < 3; i++) {
        delete p[i];
    }

    return 0;
}