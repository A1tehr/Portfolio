//
// Created by Admin on 17.03.2020.
//

#ifndef LESSON25_PRESON_H
#define LESSON25_PRESON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    double cash;
public:
    Person(string name, double cash);
    bool Buy(double price);
    string GetName();
    double GetCash();
    void SetCorrectCash();
};


#endif //LESSON25_PRESON_H
