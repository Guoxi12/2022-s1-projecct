#pragma once

#include "printable.h"
#include <string>

using namespace std;

class Vehicle : public printable{
    protected:
        int _price;
        int _vehicle_ID;
        string _brand;
    public:
        Vehicle();
        Vehicle(int price, int vehicle_ID, string brand);
        int get_price();
        int get_ID();
        string get_brand();
        ~Vehicle();
};
