
#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

class Ute : public Vehicle{
    protected:
        string _fuel_type;
        double _fuel_tank_capacity;
        int _load_capacity;
        int _fuel_average_distance;
        string _name;
    public:
        Ute();
        Ute(int price, int vehicle_ID, string brand, string fuel_type, double fuel_tank_capacity, int load_capacity, int fuel_average_distance, string name);
        //string get_made();
        // int get_price();
        int get_ID();
        string get_fuel_type();
        double get_fuel_tank_capacity();
        int get_load_capacity();
        int get_fuel_average_distance();
        string get_name();
        int get_price();
        void print_info();  // This function will be implenmented in 'Ute' class

        ~Ute();
};
