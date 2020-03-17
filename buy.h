//
// Created by Admin on 17.03.2020.
//

#ifndef LESSON25_BUY_H
#define LESSON25_BUY_H

#include <string>

#include "preson.h"
#include "product.h"

using namespace std;

class Buy {
private:
    string namePerson;
    string nameProduct;
    double price;
public:
    Buy(Person person, Product product);
    string GetNamePerson();
    string GetNameProduct();
    double GetPrice();

};


#endif //LESSON25_BUY_H
