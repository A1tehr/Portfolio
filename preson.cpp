//
// Created by Admin on 17.03.2020.
//

#include "preson.h"
#include <iostream>
Person::Person(string name, double cash) {
    this->name = name;
    this->cash = cash;
    while(this->cash < 0)
    SetCorrectCash();
}

string Person::GetName() {
    return name;
}

double Person::GetCash() {
    return cash;
}

bool Person::Buy(double price) {
    if(price > cash) return false;
    else {
        cash -= price;
        return true;
    }
}

void Person::SetCorrectCash() {
    double temp;
    cout << "\n Incorrect cash. Enter new cash to " << name << ": "; cin >> temp;
    cash = temp;
}

