#ifndef Student_h
#define Student_h

class Person {
    int height = 0;
    int weight = 0;

public: 
    void setHeight(int h);
    void setWeight(int w);
    void setBoth(int h, int w);
    int getHeight();
    int getWeight();
};

#endif
