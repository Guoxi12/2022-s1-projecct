#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

class Sedan : public Vehicle{
    protected:
        double _fuel_consumption_100km;
        int _seats_number;
        string _name;
    public:
        Sedan();
        Sedan(int price, int vehicle_ID, string brand, string name, double fuel_consumption_100km, int seats_number);
        double get_fuel_consumption_100km();
        int get_seats_number();
        int get_ID();
        string get_name();
        int get_price();
        void print_info();  // This function will be implemented in 'Sedan' class.

        ~Sedan();
};

