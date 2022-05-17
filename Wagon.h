#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

class Wagon : public Vehicle{
    protected:
        string _name;

    public:
        Wagon();
        Wagon(int price, int vehicle_ID,string brand, string name);
        string get_name();
        int get_price();
        int get_ID();
        void print_info();
        ~Wagon();
};
