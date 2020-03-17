//
// Created by Admin on 17.03.2020.
//

#include "product.h"
#include <iostream>

Product::Product(string name, double price) {
    this->name = name;
    this->price = price;
    while(this->price <= 0) {
    SetCorrectPrice();
    }
}

void Product::SetCorrectPrice() {
    double temp;
    cout << "\n Incorrect price. Enter new price to " << name << ": "; cin >> temp;
    price = temp;
}

string Product::GetName() {
    return name;
}

double Product::GetPrice() {
    return price;
}