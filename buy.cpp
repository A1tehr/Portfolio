//
// Created by Admin on 17.03.2020.
//

#include "buy.h"

Buy::Buy(Person person, Product product) {
    namePerson = person.GetName();
    nameProduct = product.GetName();
    price = product.GetPrice();
}

double Buy::GetPrice() {
    return price;
}

string Buy::GetNamePerson() {
    return namePerson;
}

string Buy::GetNameProduct() {
    return nameProduct;
}