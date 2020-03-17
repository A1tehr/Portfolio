#include <iostream>
#include "preson.h"
#include "product.h"
#include "buy.h"

using namespace std;

int main() {
    Person vasya("Vasya", -100);
    Product phone("iPear", -50);
    Product iPhone("iApple", -300);

    if(vasya.Buy(phone.GetPrice())){
        Buy buy1(vasya, phone);
        cout << "\n\nWho bought: " << buy1.GetNamePerson() <<
             "\nWhat bought: " << buy1.GetNameProduct() <<
             "\nPrice: " << buy1.GetPrice() <<
             "\nVasya's cash is " << vasya.GetCash() << endl;
    } else {
        cout << "\n\nVasya works for food \t" <<
        vasya.GetCash() << endl;
    }

    if(vasya.Buy(iPhone.GetPrice())){
        Buy buy2(vasya, iPhone);
        cout << "\n\nWho bought: " << buy2.GetNamePerson() <<
             "\nWhat bought: " << buy2.GetNameProduct() <<
             "\nPrice: " << buy2.GetPrice() <<
             "Vasya's cash is " << vasya.GetCash() << endl;;
    } else {
        cout << "\n\nVasya works for food \t" <<
             vasya.GetCash() << endl;
    }

}