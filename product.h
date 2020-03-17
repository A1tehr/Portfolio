//
// Created by Admin on 17.03.2020.
//

#ifndef LESSON25_PRODUCT_H
#define LESSON25_PRODUCT_H

#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
public:
    Product(string name, double price);
    string GetName();
    double GetPrice();
    void SetCorrectPrice();

};


#endif //LESSON25_PRODUCT_H
